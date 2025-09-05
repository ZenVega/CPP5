/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:33:16 by uschmidt          #+#    #+#             */
/*   Updated: 2025/09/05 12:54:38 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "../AForm/AForm.hpp"
#include "../PresidentialPardonForm/PresidentialPardonForm.hpp"
#include "../RobotomyRequestForm/RobotomyRequestForm.hpp"
#include "../ShrubberyCreationForm/ShrubberyCreationForm.hpp"
#include "../includes/CONSTANTS.hpp"
#include <exception>

class Intern
{
private:
public:
	Intern();
	Intern(const Intern &other);
	~Intern();
	Intern &operator=(const Intern &other);

	AForm *makeForm(string form_name, string form_type);
	class UnknownFormException : public std::exception
	{
	public:
		const char *what() const throw();
	};
};
#endif
