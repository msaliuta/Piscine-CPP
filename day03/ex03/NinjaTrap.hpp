/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 22:49:31 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/06 22:49:40 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
# define NINJATRAP_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	NinjaTrap : public ClapTrap
{

	public:

		NinjaTrap(void);
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap &obj);
		virtual ~NinjaTrap(void);
		NinjaTrap &operator=(NinjaTrap const &r);

		void	ninjaShoeBox(ClapTrap &obj);
		void	ninjaShoeBox(FragTrap &obj);
		void	ninjaShoeBox(NinjaTrap &obj);
		void	ninjaShoeBox(ScavTrap &obj);
}; 

#endif
