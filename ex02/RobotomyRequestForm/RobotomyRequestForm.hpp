/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 12:50:58 by uschmidt          #+#    #+#             */
/*   Updated: 2025/09/04 13:32:44 by uschmidt         ###   ########.fr       */
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
	RobotomyRequestForm(string &target);
	RobotomyRequestForm(const RobotomyRequestForm &other);
	~RobotomyRequestForm();
	RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
	string				 getTarget() const;
	void				 beExecuted() const;
};
#endif
