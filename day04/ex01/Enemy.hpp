/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 20:12:56 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/07 20:12:57 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
# define ENEMY_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>

class	Enemy
{

	public:

		Enemy(void);
		Enemy(int hp, std::string const &type);
		Enemy(Enemy &obj);
		virtual ~Enemy(void);
		Enemy &operator=(Enemy const &r);

		std::string		getType(void) const;
		int				getHP(void) const;
		void			setHP(int i);

		virtual void	takeDamage(int);

	private:
		int				_hp;
		std::string		_type;

};

#endif
