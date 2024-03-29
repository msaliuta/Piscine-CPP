/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 20:13:19 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/07 20:13:20 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return;
}

SuperMutant::SuperMutant(SuperMutant &obj) : Enemy(obj)
{
	*this = obj;
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh ..." << std::endl;
	return;
}

SuperMutant &SuperMutant::operator=(SuperMutant const &r) 
{
	Enemy::operator=(r);
	return (*this);
}

void			SuperMutant::takeDamage(int amount)
{
	int i = 0;

	if (amount < 3)
		return;
	else if (amount > (this->getHP() + 3) )
		i = this->getHP() + 3;
	else
		i = amount;
	this->setHP(this->getHP() - i + 3);
	if (this->getHP() < 0)
		this->setHP(0);
	return;
}
