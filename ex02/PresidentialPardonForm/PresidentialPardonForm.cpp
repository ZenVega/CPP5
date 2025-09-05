/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 11:49:49 by uschmidt          #+#    #+#             */
/*   Updated: 2025/09/05 12:00:38 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

bool pardon_target(string target)
{
	std::ifstream sourceFile(target.c_str());
	string		  buffer;
	if (sourceFile)
	{
		std::ostringstream ss;
		ss << sourceFile.rdbuf();
		buffer = ss.str();
		sourceFile.close();
	}
	std::ofstream TargetFile(target.c_str());
	if (TargetFile)
	{
		TargetFile << PARDON << endl;
		if (sourceFile)
			TargetFile << buffer << endl;
		TargetFile << PARDON << endl;
		TargetFile.close();
		return true;
	}
	cout << "Could not create/open file" << endl;
	return false;
}

PresidentialPardonForm::PresidentialPardonForm() :
	AForm("DefaultPresidentialPardonForm", 25, 5),
	_target("null")
{
	cout << "Default PresidentialPardonForm created" << endl;
}

PresidentialPardonForm::PresidentialPardonForm(const string &target) :
	AForm("DefaultPresidentialPardonForm", 25, 5),
	_target(target)
{
	cout << getName() << " created" << endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other) :
	AForm(other),
	_target(other.getTarget()) {}

PresidentialPardonForm::~PresidentialPardonForm()
{
	cout << "PresidentialPardonForm burned" << endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	if (this != &other)
		_target = other.getTarget();
	return *this;
}

void PresidentialPardonForm::beExecuted() const
{
	time_t timestamp;
	time(&timestamp);

	if (pardon_target(_target))
		cout << _target << " has been pardoned by Zaphod Beeblebrox" << endl;
	else
		cout << "Pardon of " << _target << " failed!" << endl;
}

string PresidentialPardonForm::getTarget() const
{
	return _target;
}
