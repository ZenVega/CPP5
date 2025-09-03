/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 15:26:15 by uschmidt          #+#    #+#             */
/*   Updated: 2025/08/28 15:26:15 by uschmidt         ###   ########.fr       */
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
		Form f1 = Form();
		cout << f1 << endl;
		b1.signForm(f1);
	}
	catch (const std::exception &e)
	{
		cout << "Exception caught: " << e.what() << endl;
	}
	try
	{
		Form f2 = Form("treaty", 20, 50);
		cout << f2 << endl;
		b1.signForm(f2);
	}
	catch (const std::exception &e)
	{
		cout << "Exception caught: " << e.what() << endl;
	}
	try
	{
		Form f3 = Form("declare peace", 20, 50);
		cout << f3 << endl;
		b2.signForm(f3);
	}
	catch (const std::exception &e)
	{
		cout << "Exception caught: " << e.what() << endl;
	}
	try
	{
		Form f4 = Form("bill", 20, 250);
		cout << f4 << endl;
	}
	catch (const std::exception &e)
	{
		cout << "Exception caught: " << e.what() << endl;
	}

	return 0;
}
