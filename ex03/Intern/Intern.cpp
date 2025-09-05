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

enum form_types
{
	"robotomy request" = 1,
}

Intern::Intern(void)
{
	cout << "A pathetic little intern was created" << endl;
}

Intern::Intern(const Intern &other)
{
	cout << "An Intern is copied" << endl;
}

Intern::~Intern()
{
	cout << "Ciao little intern" << endl;
}

Intern &Intern::operator=(const Intern &other)
{
	cout << "A similar intern happened" << endl;
	return *this;
}

AForm *Intern::makeForm(string form_name, string form_type)
{
	switch (form_type.c_str())
	case:
		"robotomy request" new RobotomyRequestForm = RobotomyRequestForm(form_name);)
}
