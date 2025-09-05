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
	Intern	   i2 = Intern();
	try
	{
		AForm *form = i2.makeForm("shrub_shrub", "shrubbery creation");
		cout << *form << endl;
		b1.signForm(*form);
		b1.executeForm(*form);
		if (form != NULL)
			delete form;
		AForm *false_form = i2.makeForm("birth certificate", "birth");
		cout << *false_form << endl;
		b1.signForm(*false_form);
		b1.executeForm(*false_form);
		if (false_form)
			delete false_form;
	}
	catch (const std::exception &e)
	{
		cout << "Exception caught: " << e.what() << endl;
	}
	Bureaucrat b3 = Bureaucrat("Master Bureaucrat", 1);
	return 0;
}
