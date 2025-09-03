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
	Bureaucrat no_name;
	Bureaucrat b1 = Bureaucrat("Wilhelm", 12);
	Bureaucrat b2 = Bureaucrat("Toni", 150);
	try
	{
		Form f1 = Form();
		cout << f1 << endl;
		f1.beSigned(b1);
		Form f2 = Form("treaty", 20, 50);
		cout << f2 << endl;
		Form f3 = Form("bill", 20, 250);
		cout << f3 << endl;
	}
	catch (const std::exception &e)
	{
		cout << "Exception caught: " << e.what() << endl;
	}

	try
	{
		b2.decrement();
	}
	catch (const std::exception &e)
	{
		cout << "Exception caught: " << e.what() << endl;
	}
	cout << b1 << endl;
	cout << b2 << endl;
	return 0;
}
