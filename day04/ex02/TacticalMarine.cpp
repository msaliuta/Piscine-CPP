/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <msaliuta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 20:16:05 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/07 20:16:42 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for battle" << std::endl;
	return;
}

TacticalMarine::TacticalMarine(TacticalMarine const &obj)
{
	*this = obj;
	std::cout << "Tactical Marine ready for battle" << std::endl;
	return;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh ..." << std::endl;
	return;
}

TacticalMarine &TacticalMarine::operator=(TacticalMarine const &r) 
{
	(void)r;
	return (*this);
}

ISpaceMarine	*TacticalMarine::clone() const
{
	ISpaceMarine	*ret = new TacticalMarine(*this);
	return (ret);
}

void			TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT !" << std::endl;
	return;
}

void			TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with bolter *" << std::endl;
	return;
}

void			TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with chainsword *" << std::endl;
	return;
}
