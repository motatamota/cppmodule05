#include "Intern.h"

Intern::Intern()
{
}

Intern::Intern(const Intern &other)
{
	(void)other;
}

Intern &Intern::operator=(const Intern & other)
{
	(void)other;
	return (*this);
}

Intern::~Intern()
{
}

AForm* createShrubberyCreationForm(const std::string& target) {
	return new ShrubberyCreationForm(target);
}

AForm* createRobotomyRequestForm(const std::string& target) {
	return new RobotomyRequestForm(target);
}

AForm* createPresidentialPardonForm(const std::string& target) {
	return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(const std::string& formName, const std::string& target) const {
	const std::string formNames[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	AForm* (*formCreators[])(const std::string&) = {
		createShrubberyCreationForm,
		createRobotomyRequestForm,
		createPresidentialPardonForm
	};

	for (size_t i = 0; i < 3; ++i) {
		if (formName == formNames[i]) {
			std::cout << "Intern creates " << formName << std::endl;
			return formCreators[i](target);
		}
	}

	std::cerr << "Error: Form \"" << formName << "\" not found." << std::endl;
	return 0;
}
