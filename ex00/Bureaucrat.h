#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
# include <iostream>
# include <string>

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
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		const char* what() const throw();
	};
	std::string	getName() const;
	int			getGrade() const;
	void		upGrade();
	void		downGrade();
};

std::ostream	&operator<<(std::ostream &stream, const Bureaucrat &other);

#endif
