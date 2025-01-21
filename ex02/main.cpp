#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

int	main()
{
	try
	{
		std::cout << "tset:1" << std::endl;
		Bureaucrat taiga("taiga", 1);
		AForm *p = new ShrubberyCreationForm("tree");
		taiga.signForm(*p);
		taiga.executeForm(*p);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << '\n';
	}
	try
	{
		std::cout << "tset:2" << std::endl;
		Bureaucrat taiga("taiga", 1);
		AForm *p = new RobotomyRequestForm("Mouse");
		taiga.signForm(*p);
		taiga.executeForm(*p);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << '\n';
	}
}
