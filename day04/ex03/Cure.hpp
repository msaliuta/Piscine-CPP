/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 20:19:19 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/07 20:19:21 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "ICharacter.hpp"

class	Cure : public AMateria
{

	public:

		Cure(void);
		Cure(std::string const &type);
		Cure(Cure &obj);
		~Cure(void);
		Cure &operator=(Cure const &r);

		Cure*		clone(void) const;
		void			use(ICharacter& target);

};

#endif
