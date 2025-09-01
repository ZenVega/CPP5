/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 10:49:49 by uschmidt          #+#    #+#             */
/*   Updated: 2025/09/01 14:15:27 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "../includes/CONSTANTS.hpp"

class Bureaucrat
{
private:
	const string _name;
	int			 _grade;

public:
	Bureaucrat();
	Bureaucrat(string name, int grade);
	~Bureaucrat();

	int			getGrade(void) const;
	void		setGrade(int grade);
	string		getName(void) const;
	Bureaucrat &operator=(const Bureaucrat &other);
};

ostream &operator<<(ostream &out, const Bureaucrat &other);

#endif
