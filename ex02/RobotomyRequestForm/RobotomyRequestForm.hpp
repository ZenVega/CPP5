/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 12:50:58 by uschmidt          #+#    #+#             */
/*   Updated: 2025/09/04 14:52:02 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP

#include "../AForm/AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
	string _target;

public:
	RobotomyRequestForm();
	// needs to be 'const string' in order to call it with a temporart char * from main.cpp
	RobotomyRequestForm(const string &target);
	RobotomyRequestForm(RobotomyRequestForm const &other);
	~RobotomyRequestForm();
	RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
	string				 getTarget() const;
	void				 beExecuted() const;
};
#endif
