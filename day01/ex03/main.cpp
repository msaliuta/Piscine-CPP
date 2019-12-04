/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 22:28:58 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/04 22:29:00 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int		main( void )
{
	srand(time(0));

	std::cout << "one zombie:\n";
	ZombieHorde asd;
	asd.announce();

	std::cout << "\nmultiply zombies:\n";
	ZombieHorde theHorde(5);

	theHorde.announce();

	return 0;
}
