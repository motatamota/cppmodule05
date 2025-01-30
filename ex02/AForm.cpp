#include "AForm.h"

AForm::AForm() : name_("No name"), is_signed_(false), grade_for_signed_(1), grade_for_excute_(1)
{
}

AForm::AForm(std::string name, int signe, int excute) : name_(name), is_signed_(false), grade_for_signed_(signe), grade_for_excute_(excute)
{
	if (grade_for_signed_ < 1 || grade_for_excute_ < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (grade_for_signed_ > 150 || grade_for_excute_ > 150)
		throw (Bureaucrat::GradeTooLowException());
}

AForm::AForm(AForm &other) : name_(other.name_), is_signed_(other.is_signed_), grade_for_signed_(other.grade_for_signed_), grade_for_excute_(other.grade_for_excute_)
{
}

const AForm	&AForm::operator=(const AForm &other)
{
	if (this != &other)
	{
		is_signed_ = other.is_signed_;
	}
	return (*this);
}

AForm::~AForm()
{
}

std::string	AForm::getName() const
{
	return (name_);
}

int	AForm::getSignedGrade() const
{
	return (grade_for_signed_);
}

int	AForm::getExcuteGrade() const
{
	return (grade_for_excute_);
}

bool	AForm::isSigned() const
{
	return (is_signed_);
}

void	AForm::beSigned(const Bureaucrat &other)
{
	if (grade_for_signed_ < other.getGrade())
		throw GradeTooLowException();
	is_signed_ = true;
}

std::ostream	&operator<<(std::ostream &stream, const AForm &other)
{
	stream << other.getName() << ", signed "
		<< other.getSignedGrade() << ", excute "
		<< other.getExcuteGrade() << ".";
	return (stream);
}

const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char	*AForm::NoSignException::what() const throw()
{
	return ("No sign");
}
