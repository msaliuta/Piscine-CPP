/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <msaliuta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 21:53:33 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/04 21:57:19 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main( void )
{
	ZombieEvent cemetery("Zzzzombie");
	Zombie *z1 = cemetery.newZombie("Zombie1");
	cemetery.setZombieType("almast dead zombie");
	Zombie *z2 = cemetery.randomChump();

	std::cout << "Creating zomby on stack \n";
	Zombie z3;
	z3.announce();

	delete z1;
	delete z2;

	return 0;
}
