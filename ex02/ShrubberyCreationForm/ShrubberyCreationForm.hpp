/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 14:12:44 by uschmidt          #+#    #+#             */
/*   Updated: 2025/09/04 14:34:29 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP

// Raw String literal // ignores excape characters
#define TREE R"(     ccee88oo
  C8O8O8Q8PoOb o8oo
 dOB69QO8PdUOpugoO9bD
CgggbU8OU qOp qOdoUOdcb
    6OuU  /p u gcoUodpP
      \//  /douUP
        \////
         |||\
         |||/
         |||||
   .....//||||....)"

#include "../AForm/AForm.hpp"
class ShrubberyCreationForm : public AForm
{
private:
	string _target;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
	string				   getTarget() const;
	void				   beExecuted() const;
};
#endif
