#include "Bureaucrat.h"

Bureaucrat::Bureaucrat() : name_("No name"), grade_(150)
{
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name_(name), grade_(grade)
{
	if (grade_ < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (grade_ > 150)
		throw (Bureaucrat::GradeTooLowException());
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name_(other.name_), grade_(other.grade_)
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		grade_ = other.grade_;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

std::string	Bureaucrat::getName() const
{
	return (name_);
}

int			Bureaucrat::getGrade() const
{
	return (grade_);
}

void		Bureaucrat::upGrade()
{
	if (grade_ == 1)
		throw (Bureaucrat::GradeTooHighException());
	grade_--;
}

void		Bureaucrat::downGrade()
{
	if (grade_ == 150)
		throw (Bureaucrat::GradeTooLowException());
	grade_++;
}

void	Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->name_ << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->name_ << " couldn't sign " << form.getName() << " because ";
		std::cerr << e.what() << ".\n";
	}
}

void		Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->name_ << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->name_ << " couldn't execute " << form.getName() << " because ";
		std::cerr << e.what() << '\n';
	}
}

std::ostream	&operator<<(std::ostream &stream, const Bureaucrat &other)
{
	stream << other.getName() << ", bureaucrat grade " << other.getGrade() << ".";
	return (stream);
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}
