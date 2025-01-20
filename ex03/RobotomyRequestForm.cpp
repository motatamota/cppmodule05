#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm() : AForm("robotomy request", 72, 45), target_("No Target")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("robotomy request", 72, 45), target_(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm("robotomy request", 72, 45), target_(other.target_)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	(void)other;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

std::string	RobotomyRequestForm::getTarget() const
{
	return (target_);
}

void	RobotomyRequestForm::execute(Bureaucrat const & excutor) const
{
	if (!this->isSigned())
		throw (NoSignException());
	if (this->getExcuteGrade() < excutor.getGrade())
		throw (GradeTooLowException());
	srand(time(NULL));
	std::cout << "Drill: killllluuuuuuuuuuuuuuuuuuu!!!!!!!!!!!" << std::endl;
	if (rand() % 2)
		std::cout << "Success!! " << target_ << " is alive." << std::endl;
	else
		std::cout << "Oh... " << target_ << " is dead." << std::endl;
}
