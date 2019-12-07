/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 20:18:32 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/07 20:19:01 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "AMateria.hpp"

class	Character : public ICharacter
{

	public:

		Character(void);
		Character(std::string const &name);
		Character(Character &obj);
		~Character(void);
		Character &operator=(Character const &r);


		std::string const 	&getName() const;
		void 				equip(AMateria* obj);
		void 				unequip(int i);
		void 				use(int i, ICharacter& target);

	private:

		AMateria		*_mat[4];
		std::string	_name;

};

#endif
