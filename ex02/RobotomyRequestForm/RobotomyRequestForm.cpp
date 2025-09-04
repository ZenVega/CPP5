/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 12:56:18 by uschmidt          #+#    #+#             */
/*   Updated: 2025/09/04 14:06:04 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
	AForm("DefaultRobotRequestForm", 72, 45),
	_target("null")
{
	cout << "Default RobotomyRewuestForm created";
}

RobotomyRequestForm::RobotomyRequestForm(string &target) :
	AForm("DefaultRobotRequestForm", 72, 45),
	_target(target)
{
	cout << getName() << " created";
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) :
	AForm(other),
	_target(other.getTarget()) {}

RobotomyRequestForm::~RobotomyRequestForm()
{
	cout << "RobotomyRewuestForm burned";
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	if (this != &other)
		_target = other.getTarget();
	return *this;
}

void RobotomyRequestForm::beExecuted() const
{
	time_t timestamp = time(NULL);
	if (timestamp % 2)
		cout << "crank crank shringshring cchrrrrhrhrhhshfshsdht. bing bing" << _target << " robotomized" << endl;
	else
		cout << "Robotomization of " << _target << " failed!" << endl;
}
