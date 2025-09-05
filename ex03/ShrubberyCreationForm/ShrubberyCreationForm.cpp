/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 12:56:18 by uschmidt          #+#    #+#             */
/*   Updated: 2025/09/04 15:07:32 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
	AForm("DefaultShrubberyCreationForm", 145, 137),
	_target("null")
{
	cout << "Default ShrubberyCreationForm created" << endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const string &target) :
	AForm("ShrubberyCreationForm", 145, 137),
	_target(target)
{
	cout << getName() << " created" << endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) :
	AForm(other),
	_target(other.getTarget()) {}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	cout << "ShrubberyCreationForm burned" << endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	if (this != &other)
		_target = other.getTarget();
	return *this;
}

void ShrubberyCreationForm::beExecuted() const
{
	string		  newTarget = getTarget() + "_shrubbery";
	std::ofstream TargetFile(newTarget.c_str());
	if (TargetFile)
	{
		TargetFile << TREE;
		TargetFile.close();
	}
	else
		cout << "Could not create/open file" << endl;
}

string ShrubberyCreationForm::getTarget() const
{
	return _target;
}
