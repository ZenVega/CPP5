/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 12:56:18 by uschmidt          #+#    #+#             */
/*   Updated: 2025/09/04 15:11:44 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

bool robotomize_target(string target)
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
		TargetFile << ROBOTOMIZER << endl;
		if (sourceFile)
		{
			TargetFile << buffer << endl;
		}
		TargetFile << ROBOTOMIZER << endl;
		TargetFile.close();
		return true;
	}
	cout << "Could not create/open file" << endl;
	return false;
}

RobotomyRequestForm::RobotomyRequestForm() :
	AForm("DefaultRobotRequestForm", 72, 45),
	_target("null")
{
	cout << "Default RobotomyRewuestForm created" << endl;
}

RobotomyRequestForm::RobotomyRequestForm(const string &target) :
	AForm("DefaultRobotRequestForm", 72, 45),
	_target(target)
{
	cout << getName() << " created" << endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) :
	AForm(other),
	_target(other.getTarget()) {}

RobotomyRequestForm::~RobotomyRequestForm()
{
	cout << "RobotomyRewuestForm burned" << endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	if (this != &other)
		_target = other.getTarget();
	return *this;
}

void RobotomyRequestForm::beExecuted() const
{
	time_t timestamp;
	time(&timestamp);

	if (timestamp % 2)
	{
		if (robotomize_target(_target))
			cout << "crank crank shringshring cchrrrrhrhrhhshfshsdht. bing bing" << _target << " robotomized" << endl;
	}
	else
		cout << "Robotomization of " << _target << " failed!" << endl;
}

string RobotomyRequestForm::getTarget() const
{
	return _target;
}
