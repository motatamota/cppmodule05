#ifndef SHFORM_H
# define SHFORM_H
# include <iostream>
# include <string>
# include "Bureaucrat.h"

class	ShrubberyCreationForm : public AForm
{
private:
	const std::string	target_;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
	~ShrubberyCreationForm();

	std::string	getTarget() const;
	void	execute(Bureaucrat const & excutor) const;
};

#endif
