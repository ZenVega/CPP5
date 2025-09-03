/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 11:28:55 by uschmidt          #+#    #+#             */
/*   Updated: 2025/09/02 14:24:54 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Bureaucrat/Bureaucrat.hpp"
#include "AForm.hpp"

AForm::AForm(void) :
	_name("unknown"),
	_signed(false),
	_grade_sign(150),
	_grade_exe(150)
{
	cout << _name << "-AForm created" << endl;
}

AForm::AForm(string name, int grade_sign, int grade_exe) :
	_name(name),
	_signed(false),
	_grade_sign(grade_sign),
	_grade_exe(grade_exe)
{
	if (grade_sign > 150 || grade_exe > 150)
		throw GradeTooHighException();
	if (grade_sign < 1 || grade_exe < 1)
		throw GradeTooLowException();
	cout << _name << "-AForm created" << endl;
}

AForm::AForm(const AForm &other) :
	_name(other.getName()),
	_signed(other.getSigned()),
	_grade_sign(other.getGradeSign()),
	_grade_exe(other.getGradeExe())
{
	cout << "An AForm of the name " << _name << " got copied" << endl;
}

string AForm::getName(void) const
{
	return _name;
}

bool AForm::getSigned(void) const
{
	return _signed;
}

int AForm::getGradeSign(void) const
{
	return _grade_sign;
}

int AForm::getGradeExe(void) const
{
	return _grade_exe;
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _grade_sign)
		throw GradeTooLowException();
	_signed = true;
}

AForm &AForm::operator=(const AForm &other)
{
	if (this != &other)
	{
		_signed = other.getSigned();
	}
	std::cout << "Copy Assignment Operator Called!" << std::endl;

	return (*this);
}

AForm::~AForm()
{
	cout << "The AForm of name: " << _name << " gets archived" << endl;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

ostream &operator<<(ostream &out, const AForm &other)
{
	out << other.getName() << ", grade to sign: " << other.getGradeSign() << ", grade to exe: " << other.getGradeSign();
	return out;
}
