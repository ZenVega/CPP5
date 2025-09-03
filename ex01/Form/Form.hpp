/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 10:49:49 by uschmidt          #+#    #+#             */
/*   Updated: 2025/09/02 14:24:56 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "../includes/CONSTANTS.hpp"
#include <bits/stdc++.h>
#include <exception>

class Bureaucrat;
class Form
{
private:
	const string _name;
	bool		 _signed;
	const int	 _grade_sign;
	const int	 _grade_exe;

public:
	Form();
	Form(string name, int grade_sign, int grade_exe);
	Form(const Form &other);
	~Form();

	Form &operator=(const Form &other);

	string getName(void) const;
	bool   getSigned(void) const;
	int	   getGradeSign(void) const;
	int	   getGradeExe(void) const;
	void   beSigned(const Bureaucrat &bureaucrat);

	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

ostream &operator<<(ostream &out, const Form &other);

#endif
