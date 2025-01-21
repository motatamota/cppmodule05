#ifndef INTERN_H
# define INTERN_H
# include <iostream>
# include <string>
# include "AForm.h"
#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

class Intern
{
private:

public:
	Intern();
	Intern(const Intern &other);
	Intern &operator=(const Intern & other);
	~Intern();

	AForm* makeForm(const std::string& formName, const std::string& target) const;
	class NoFormatException : public std::exception
	{
		const char* what() const throw();
	};
};

#endif
