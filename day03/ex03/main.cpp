/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 22:50:07 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/06 22:50:10 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int	main()
{
	FragTrap trapone;
	ScavTrap scavone;

	std::cout << std::endl;

	trapone.meleeAttack("Lots of Skags");
	scavone.meleeAttack("Baby Skags");

	trapone.rangedAttack("All those Skags");
	scavone.rangedAttack("Half-Alive Skags");

	trapone.takeDamage(30);
	scavone.takeDamage(30);

	trapone.beRepaired(10);
	scavone.beRepaired(10);

	trapone.displayStats();
	scavone.displayStats();

	trapone.vaulthunter_dot_exe("Skags");
	scavone.challengeNewcomer();

	FragTrap traptwo(trapone);
	ScavTrap scavtwo(scavone);

	traptwo.rename("I AM A TRAP");
	scavtwo.rename("I AM A SCAVENGER");

	NinjaTrap ninone("I AM A NINJA");
	ninone.ninjaShoeBox(traptwo);
	ninone.ninjaShoeBox(scavtwo);

	NinjaTrap nintwo;
	nintwo.ninjaShoeBox(ninone);

	ClapTrap clapone("I AM THE ORIGINAL");
	nintwo.ninjaShoeBox(clapone);
	
	return (0);
}
