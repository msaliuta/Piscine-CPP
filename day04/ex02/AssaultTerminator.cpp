/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 20:14:12 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/07 20:14:14 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
	return;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &obj)
{
	*this = obj;
	std::cout << "* teleports from space *" << std::endl;
	return;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I’ll be back ..." << std::endl;
	return;
}

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const &r) 
{
	(void)r;
	return (*this);
}

ISpaceMarine	*AssaultTerminator::clone() const
{
	ISpaceMarine	*ret = new AssaultTerminator(*this);
	return (ret);
}

void			AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
	return;
}

void			AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
	return;
}

void			AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
	return;
}
