/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 11:28:55 by uschmidt          #+#    #+#             */
/*   Updated: 2025/09/02 14:24:54 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) :
	_name("unknown"),
	_grade_sign(1),
	_grade_exe(1),
	_signed(false)
{
	cout << _name << "-Form created" << endl;
}

Form::Form(string name, int grade_sign, int grade_exe) :
	_name(name),
	_grade_sign(grade_sign),
	_grade_exe(grade_exe),
	_signed(false)
{
	cout << _name << "-Form created" << endl;
}

Form &Form::operator=(const Form &other)
{
	if (this != &other)
	{
		_signed = other.getSigned();
	}
	std::cout << "Copy Assignment Operator Called!" << std::endl;

	return (*this);
}

Form::~Form()
{
	cout << "The Form of name: " << _name << " gets archived" << endl;
}

int Form::getGrade(void) const
{
	return _grade;
}

string Form::getName(void) const
{
	return _name;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "This grade is beyond the Burocreats boundaries";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "A Burocreats may never have that low a grade";
}

ostream &operator<<(ostream &out, const Form &other)
{
	out << other.getName() << ", bureaucrat grade " << other.getGrade();
	return out;
}
