/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubbertCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 12:56:18 by uschmidt          #+#    #+#             */
/*   Updated: 2025/09/04 14:35:04 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
	AForm("DefaultShrubberyCreationForm", 145, 137),
	_target("null")
{
	cout << "Default ShrubberyCreationForm created";
}

ShrubberyCreationForm::ShrubberyCreationForm(string &target) :
	AForm("DefaultShrubberyCreationForm", 145, 137),
	_target(target)
{
	cout << getName() << " created";
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) :
	AForm(other),
	_target(other.getTarget()) {}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	cout << "ShrubberyCreationForm burned";
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	if (this != &other)
		_target = other.getTarget();
	return *this;
}

void ShrubberyCreationForm::beExecuted() const
{
	std::ofstream TargetFile(getTarget() + "_shrubbery");
	TargetFile << TREE;
}
