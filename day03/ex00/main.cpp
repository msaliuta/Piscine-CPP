/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 22:39:49 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/06 22:39:51 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "FragTrap.hpp"

int	main()
{
	FragTrap trapone;

	trapone.meleeAttack("Bandits");
	trapone.rangedAttack("Raiders");
	trapone.takeDamage(50);
	trapone.beRepaired(20);
	trapone.beRepaired(50);
	trapone.takeDamage(120);
	trapone.beRepaired(500);
	trapone.rename("4LL-MT");
	trapone.beRepaired(20);

	FragTrap traptwo(trapone);
	traptwo.rename("K1LL-B0T");
	traptwo.meleeAttack("4LL-MT");
	trapone.takeDamage(30);

	trapone.vaulthunter_dot_exe("Skags");
	traptwo.vaulthunter_dot_exe("Also Skags");
	trapone.vaulthunter_dot_exe("More Skags");
	traptwo.vaulthunter_dot_exe("Even More Skags");

	FragTrap trapthree("Stacy");
	std::cout << std::endl;

	trapone.displayStats();
	traptwo.displayStats();
	trapthree.displayStats();
	
	return (0);
}
