/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 20:14:16 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/07 20:14:18 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_H
# define ASSAULTTERMINATOR_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"

class	AssaultTerminator : public ISpaceMarine
{
	public:

		AssaultTerminator(void);
		AssaultTerminator(AssaultTerminator const &obj);
		virtual ~AssaultTerminator(void);
		AssaultTerminator &operator=(AssaultTerminator const &r);

		ISpaceMarine*	clone() const;
		void			battleCry() const;
		void			rangedAttack() const;
		void			meleeAttack() const;
};

#endif
