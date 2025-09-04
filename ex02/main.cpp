/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 15:26:15 by uschmidt          #+#    #+#             */
/*   Updated: 2025/09/04 15:07:04 by uschmidt         ###   ########.fr       */
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
		RobotomyRequestForm f1 = RobotomyRequestForm("to_robotomize");
		cout << f1 << endl;
		b1.signForm(f1);
		b1.executeForm(f1);
		b2.executeForm(f1);
	}
	catch (const std::exception &e)
	{
		cout << "Exception caught: " << e.what() << endl;
	}
	try
	{
		ShrubberyCreationForm f2 = ShrubberyCreationForm("to_shrub");
		cout << f2 << endl;
		b1.signForm(f2);
		b1.executeForm(f2);
		b2.executeForm(f2);
	}
	catch (const std::exception &e)
	{
		cout << "Exception caught: " << e.what() << endl;
	}
	return 0;
}
