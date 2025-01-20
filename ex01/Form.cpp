#include "Form.h"

Form::Form() : name_("No name"), is_signed_(false), grade_for_signed_(1), grade_for_excute_(1)
{
}

Form::Form(std::string name, int signe, int excute) : name_(name), is_signed_(false), grade_for_signed_(signe), grade_for_excute_(excute)
{
	if (grade_for_signed_ < 1 || grade_for_excute_ < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (grade_for_signed_ > 150 || grade_for_excute_ > 150)
		throw (Bureaucrat::GradeTooLowException());
}

Form::Form(Form &other) : name_(other.name_), is_signed_(other.is_signed_), grade_for_signed_(other.grade_for_signed_), grade_for_excute_(other.grade_for_excute_)
{
}

const Form	&Form::operator=(const Form &other)
{
	(void)other;
	return (*this);
}

Form::~Form()
{
}

std::string	Form::getName() const
{
	return (name_);
}

int	Form::getSignedGrade() const
{
	return (grade_for_signed_);
}

int	Form::getExcuteGrade() const
{
	return (grade_for_excute_);
}

bool	Form::isSigned() const
{
	return (is_signed_);
}

void	Form::beSigned(const Bureaucrat &other)
{
	if (grade_for_signed_ < other.getGrade())
		throw GradeTooLowException();
	is_signed_ = true;
}

std::ostream	&operator<<(std::ostream &stream, const Form &other)
{
	stream << other.getName() << ", signed "
		<< other.getSignedGrade() << ", excute "
		<< other.getExcuteGrade() << ".";
	return (stream);
}
