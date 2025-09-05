/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 15:26:15 by uschmidt          #+#    #+#             */
/*   Updated: 2025/09/05 11:59:11 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/main.hpp"
#include <exception>

int main()
{
	Bureaucrat b1 = Bureaucrat("Wilhelm", 12);
	Bureaucrat b2 = Bureaucrat("Toni", 150);
	try
	{
		ShrubberyCreationForm f2 = ShrubberyCreationForm("robo");
		cout << f2 << endl;
		b1.signForm(f2);
		b1.executeForm(f2);
		b2.executeForm(f2);
	}
	catch (const std::exception &e)
	{
		cout << "Exception caught: " << e.what() << endl;
	}
	Bureaucrat b3 = Bureaucrat("Master Bureaucrat", 1);
	try
	{
		PresidentialPardonForm f3 = PresidentialPardonForm("to_pardon");
		cout << f3 << endl;
		b3.signForm(f3);
		b3.executeForm(f3);
	}
	catch (const std::exception &e)
	{
		cout << "Exception caught: " << e.what() << endl;
	}
	return 0;
}
