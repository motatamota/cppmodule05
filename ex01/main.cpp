#include "Bureaucrat.h"

int	main()
{
	try
	{
		std::cout << "tset:1" << std::endl;
		Form	former("Declaration of Independence", 0, 10);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << '\n';
	}
	try
	{
		std::cout << "tset:2" << std::endl;
		Form	former("Declaration of Independence", 10, 0);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << '\n';
	}
	try
	{
		std::cout << "tset:3" << std::endl;
		Form	former("Declaration of Independence", 151, 10);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << '\n';
	}
	try
	{
		std::cout << "tset:4" << std::endl;
		Form	former("Declaration of Independence", 10, 151);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << '\n';
	}
	try
	{
		std::cout << "tset:5" << std::endl;
		Bureaucrat tester("taiga", 1);
		Form	former("Declaration of Independence", 10, 10);
		tester.signForm(former);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << '\n';
	}
	try
	{
		std::cout << "tset:6" << std::endl;
		Bureaucrat tester("taiga", 11);
		Form	former("Declaration of Independence", 10, 10);
		tester.signForm(former);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << '\n';
	}
}
