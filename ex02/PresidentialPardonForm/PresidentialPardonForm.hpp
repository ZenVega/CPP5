/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 11:46:59 by uschmidt          #+#    #+#             */
/*   Updated: 2025/09/05 11:46:59 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

#include "../AForm/AForm.hpp"
#include <iostream>
#include <sstream>

#define PARDON "YOU ARE PARDONNERED"

class PresidentialPardonForm : public AForm
{
private:
	string _target;

public:
	PresidentialPardonForm();
	PresidentialPardonForm(const string &target);
	PresidentialPardonForm(const PresidentialPardonForm &other);
	~PresidentialPardonForm();
	PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
	string					getTarget() const;
	void					beExecuted() const;
};
#endif
