#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target_("No Target")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), target_(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm("ShrubberyCreationForm", 145, 137), target_(other.target_)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	(void)other;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return (target_);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & excutor) const
{
	std::string tmp;
	if (!this->isSigned())
		throw (NoSignException());
	if (this->getExcuteGrade() < excutor.getGrade())
		throw (GradeTooLowException());
	tmp = target_ + "_shrubby";
	std::ofstream fstream(tmp.c_str());
	fstream << "     ccee88oo\n"
			   "  C8O8O8Q8PoOb o8oo\n"
			   " dOB69QO8PdUOpugoO9bD\n"
			   "CgggbU8OU qOp qOdoUOdcb\n"
			   "   6OuU  /p u gcoUodpP\n"
			   "      \\\\//  /douUP\n"
			   "        |||/\\\n"
			   "        |||\\/\n"
			   "        |||||\n"
			   "  .....//||||\\....\n";
}
