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

#include "../Bureaucrat/Bureaucrat.hpp"
#include "Form.hpp"

Form::Form(void) :
	_name("unknown"),
	_grade_sign(150),
	_grade_exe(150),
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
	if (grade_sign > 150 || grade_exe > 150)
		throw GradeTooHighException();
	if (grade_sign < 1 || grade_exe < 1)
		throw GradeTooLowException();
	cout << _name << "-Form created" << endl;
}

Form::Form(const Form &other) :
	_name(other.getName()),
	_signed(other.getSigned()),
	_grade_sign(other.getGradeSign()),
	_grade_exe(other.getGradeExe())
{
	cout << "An Form of the name " << _name << " got copied" << endl;
}

string Form::getName(void) const
{
	return _name;
}

bool Form::getSigned(void) const
{
	return _signed;
}

int Form::getGradeSign(void) const
{
	return _grade_sign;
}

int Form::getGradeExe(void) const
{
	return _grade_exe;
}

void Form::beSigned(const Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() > _grade_sign)
		throw GradeTooLowException();
	_signed = true;
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

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

ostream &operator<<(ostream &out, const Form &other)
{
	out << other.getName() << ", form grade to sign" << other.getGradeSign() << ", form grade to exe" << other.getGradeSign();
	return out;
}
