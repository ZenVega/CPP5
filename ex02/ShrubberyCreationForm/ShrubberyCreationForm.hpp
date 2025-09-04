/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 14:12:44 by uschmidt          #+#    #+#             */
/*   Updated: 2025/09/04 15:07:22 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP

// Raw String literal // ignores excape characters
#define TREE "     ccee88oo\n  C8O8O8Q8PoOb o8oo\n dOB69QO8PdUOpugoO9bD\nCgggbU8OU qOp qOdoUOdcb\n    6OuU  /p u gcoUodpP\n      \\\\//  /douUP\n        \\\\////\n         |||\\\\\n         |||/\n         |||||\n   .....//||||\\\\....."

#include "../AForm/AForm.hpp"
#include <iostream>

class ShrubberyCreationForm : public AForm
{
private:
	string _target;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
	string				   getTarget() const;
	void				   beExecuted() const;
};
#endif
