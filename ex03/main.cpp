#include "Bureaucrat.h"
#include "Intern.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

int	main()
{
	srand(time(NULL));
	try
	{
		Intern intern;
		AForm *form;
		form = intern.makeForm("presidential pardon", "taiga");
		Bureaucrat taro("taro", 1);
		taro.signForm(*form);
		taro.executeForm(*form);
		delete(form);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << '\n';
	}
	try
	{
		Intern intern;
		AForm *form;
		form = intern.makeForm("presidential pardon", "taiga");
		Bureaucrat taro("taro", 140);
		taro.signForm(*form);
		taro.executeForm(*form);
		delete(form);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << '\n';
	}
	try
	{
		Intern intern;
		AForm *form;
		form = intern.makeForm("presidentia pardon", "taiga");
		Bureaucrat taro("taro", 140);
		taro.signForm(*form);
		taro.executeForm(*form);
		delete(form);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << '\n';
	}
}
