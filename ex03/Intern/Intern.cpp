/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:42:18 by uschmidt          #+#    #+#             */
/*   Updated: 2025/09/05 13:05:36 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

enum FormType
{
	ROBOTOMY  = 1,
	SHRUBBERY = 2,
	P_PARDON  = 3
};

static AForm *create_form(FormType type, string target)
{
	switch (type)
	{
	case ROBOTOMY:
	{
		cout << "Intern creates a RobotomyRequestForm" << endl;
		return new RobotomyRequestForm(target);
	}
	case SHRUBBERY:
	{
		cout << "Intern creates a ShrubberyForm" << endl;
		return new ShrubberyCreationForm(target);
	}
	case P_PARDON:
	{
		cout << "Intern creates a PardonForm" << endl;
		return new PresidentialPardonForm(target);
	}
	default:
		return NULL;
	}
}

Intern::Intern(void)
{
	cout << "A pathetic little intern was created" << endl;
}

Intern::Intern(const Intern &other)
{
	cout << "An Intern is copied" << endl;
	*this = other;
}

Intern::~Intern()
{
	cout << "Ciao little intern" << endl;
}

Intern &Intern::operator=(const Intern &other)
{
	if (this == &other)
		cout << "A similar intern happened" << endl;
	return *this;
}

AForm *Intern::makeForm(string form_name, string form_type)
{

	string	 form_strings[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	FormType form_types[3]	 = {ROBOTOMY, SHRUBBERY, P_PARDON};
	for (int i = 0; i < 3; i++)
		if (!form_strings[i].compare(form_type))
			return create_form(form_types[i], form_name);
	throw UnknownFormException();
}

const char *Intern::UnknownFormException::what() const throw()
{
	return "This form is not known to an intern";
}
