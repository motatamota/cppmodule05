#ifndef FORM_H
# define FORM_H
# include <string>
# include <iostream>
# include "Bureaucrat.h"

class Bureaucrat;

class	Form
{
private:
	const std::string	name_;
	const bool				is_signed_;
	const int			grade_for_signed_;
	const int			grade_for_excute_;

public:
	Form();
	Form(std::string name, int signe, int excute);
	Form(Form &other);
	const Form	&operator=(const Form &other);
	~Form();

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
	int			getSignedGrade() const;
	int			getExcuteGrade() const;
	bool		isSigned() const;
	void		beSigned(const Bureaucrat &other);
};

std::ostream	&operator<<(std::ostream &stream, const Form &other);

#endif
