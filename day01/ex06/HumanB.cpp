/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 22:43:10 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/04 22:43:15 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB()
{
	_name = "unknown";
}

HumanB::HumanB(std::string name)
{
	_name = name;
}

HumanB::~HumanB()
{
}

Weapon const & HumanB::getWeapon()
{
	return (*_weapon);
}

void HumanB::setWeapon(Weapon &w)
{
	_weapon = &w;
}

void HumanB::attack()
{
	std::cout << _name << " attacks with his " << _weapon->getType() << "\n";
}
