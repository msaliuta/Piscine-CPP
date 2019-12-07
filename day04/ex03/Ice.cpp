/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 20:19:55 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/07 20:19:56 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "Ice.hpp"

Ice::Ice(std::string const &type) : AMateria(type)
{
	return;
}

Ice::Ice(Ice &obj)
{
	*this = obj;
	return;
}

Ice::~Ice(void)
{
	return;
}

Ice &Ice::operator=(Ice const &r) 
{
// 	setType(r.getType());
// 	setXP(r.getXP());
	(void)r;
	return (*this);
}

Ice*	Ice::clone(void) const
{
	Ice 	*ice = new Ice("Ice");

	return (ice);
}

void		Ice::use(ICharacter &target)
{
	increaseXP();
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
