#ifndef AForm_H
# define AForm_H
# include <string>
# include <iostream>
# include <fstream>
# include "Bureaucrat.h"

class Bureaucrat;

class	AForm
{
private:
	const std::string	name_;
	bool				is_signed_;
	const int			grade_for_signed_;
	const int			grade_for_excute_;

public:
	AForm();
	AForm(std::string name, int signe, int excute);
	AForm(AForm &other);
	const AForm	&operator=(const AForm &other);
	virtual ~AForm();

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
	class NoSignException : public std::exception
	{
		const char* what() const throw()
		{
			return ("No sign");
		}
	};
	std::string		getName() const;
	int				getSignedGrade() const;
	int				getExcuteGrade() const;
	bool			isSigned() const;
	void			beSigned(const Bureaucrat &other);
	virtual void	execute(Bureaucrat const & excutor) const = 0;
};

std::ostream	&operator<<(std::ostream &stream, const AForm &other);

#endif
