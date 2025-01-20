#ifndef PREFORM_H
# define PREFORM_H
# include <iostream>
# include <string>
# include "Bureaucrat.h"

class	PresidentialPardonForm : public AForm
{
private:
	const std::string	target_;

public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &other);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
	~PresidentialPardonForm();

	std::string	getTarget() const;
	void		execute(Bureaucrat const & excutor) const;
};

#endif
