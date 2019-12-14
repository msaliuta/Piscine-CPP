/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 22:43:53 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/06 22:43:54 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{

	public:

		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap &obj);
		virtual ~FragTrap(void);
		FragTrap &operator=(FragTrap const &r);

		void	vaulthunter_dot_exe(std:: string const &target);
		void	meatUnicycle(std:: string const &target);
		void	tripleClocked(std:: string const &target);
		void	shhhhTrap(std:: string const &target);
		void	rubberDucky(std:: string const &target);
		void	senselessSacrifice(std:: string const &target);


}; 

#endif
