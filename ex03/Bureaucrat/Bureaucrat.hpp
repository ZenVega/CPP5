/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 10:49:49 by uschmidt          #+#    #+#             */
/*   Updated: 2025/09/04 15:08:00 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "../AForm/AForm.hpp"
#include "../includes/CONSTANTS.hpp"
#include <bits/stdc++.h>
#include <exception>

class Bureaucrat
{
private:
	const string _name;
	int			 _grade;

public:
	Bureaucrat();
	Bureaucrat(string name, int grade);
	Bureaucrat(const Bureaucrat &other);
	~Bureaucrat();

	int			getGrade(void) const;
	void		setGrade(int grade);
	string		getName(void) const;
	Bureaucrat &operator=(const Bureaucrat &other);
	void		signForm(AForm &toSign) const;
	void		executeForm(AForm const &form) const;
	void		increment(void);
	void		decrement(void);
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
;

ostream &operator<<(ostream &out, const Bureaucrat &other);

#endif
