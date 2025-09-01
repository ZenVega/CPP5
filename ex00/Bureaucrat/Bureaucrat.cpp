/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 11:28:55 by uschmidt          #+#    #+#             */
/*   Updated: 2025/09/01 15:33:56 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) :
	_name("unknown"),
	_grade(150)
{
	cout << "An unknown Burocreat is appointed" << endl;
}

Bureaucrat::Bureaucrat(string name, int grade) :
	_name(name)
{
	this->setGrade(grade);
	cout << "An Burocreat of the name " << _name << " is appointed" << endl;
}

Bureaucrat::~Bureaucrat()
{
	cout << "The Burocreat of name: " << _name << " and grade " << _grade << " retires" << endl;
}

void Bureaucrat::setGrade(int grade)
{
}

ostream &operator<<(ostream &out, const Bureaucrat &other)
{
	out << other.getName() << ", bureaucrat grade " << other.getGrade();
	return out;
}
