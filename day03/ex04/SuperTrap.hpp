/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <msaliuta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 22:52:12 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/06 22:53:26 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_H
# define SUPERTRAP_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class	SuperTrap : virtual public FragTrap, virtual public NinjaTrap
{

	public:

		SuperTrap(void);
		SuperTrap(std::string name);
		SuperTrap(SuperTrap &obj);
		virtual ~SuperTrap(void);
		SuperTrap &operator=(SuperTrap const &r);

}; 

#endif
