#ifndef ROFORM_H
# define ROFORM_H
# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>
# include "Bureaucrat.h"

class	RobotomyRequestForm : public AForm
{
private:
	const std::string	target_;

public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &other);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
	~RobotomyRequestForm();

	std::string	getTarget() const;
	void	execute(Bureaucrat const & excutor) const;
};

#endif
