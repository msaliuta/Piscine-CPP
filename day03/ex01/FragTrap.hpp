/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 22:40:13 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/06 22:40:16 by msaliuta         ###   ########.fr       */
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

class	FragTrap
{

	public:

		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap &obj);
		virtual ~FragTrap(void);
		FragTrap &operator=(FragTrap const &r);

		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	rename(std::string input);
		void	displayStats(void);

		void	vaulthunter_dot_exe(std:: string const &target);
		void	meatUnicycle(std:: string const &target);
		void	tripleClocked(std:: string const &target);
		void	shhhhTrap(std:: string const &target);
		void	rubberDucky(std:: string const &target);
		void	senselessSacrifice(std:: string const &target);

	private:

		int					_hp;
		int					_mhp;
		int					_sp;
		int					_msp;
		int					_lvl;
		std::string			_name;
		int					_patk;
		int					_ratk;
		int					_armor;

}; 

#endif
