#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
# include <iostream>
# include <string>
# include "Form.h"

class Form;

class	Bureaucrat
{
private:
	const std::string name_;
	int	grade_;

public:
	Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &other);
	~Bureaucrat();

	class GradeTooHighException : public std::exception
	{
		const char* what() const throw()
		{
			return ("Grade too high");
		}
	};
	class GradeTooLowException : public std::exception
	{
		const char* what() const throw()
		{
			return ("Grade too low");
		}
	};
	std::string	getName() const;
	int			getGrade() const;
	void		upGrade();
	void		downGrade();
	void		signForm(Form &form);
};

std::ostream	&operator<<(std::ostream &stream, const Bureaucrat &other);

#endif
