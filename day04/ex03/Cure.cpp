/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 20:19:15 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/07 20:19:16 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "Cure.hpp"

Cure::Cure(std::string const &type) : AMateria(type)
{
	return;
}

Cure::Cure(Cure &obj)
{
	*this = obj;
	return;
}

Cure::~Cure(void)
{
	return;
}

Cure &Cure::operator=(Cure const &r) 
{
	// setType(r.getType());
	// setXP(r.getXP());
	(void)r;
	return (*this);
}

Cure*	Cure::clone(void) const
{
	Cure 	*cure = new Cure("Cure");

	return (cure);
}

void		Cure::use(ICharacter &target)
{
	this->increaseXP();
	std::cout << "* heals " << target.getName() << "'s wounds' *" << std::endl;
}
