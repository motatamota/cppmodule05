#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm() : AForm("presidential pardon", 25, 5), target_("No Target")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("presidential pardon", 25, 5), target_(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm("presidential pardon", 25, 5), target_(other.target_)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	(void)other;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

std::string	PresidentialPardonForm::getTarget() const
{
	return (target_);
}

void	PresidentialPardonForm::execute(Bureaucrat const & excutor) const
{
	if (!this->isSigned())
		throw (NoSignException());
	if (this->getExcuteGrade() < excutor.getGrade())
		throw (GradeTooLowException());
	std::cout << target_ << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
