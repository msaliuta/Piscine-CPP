/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <msaliuta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 21:52:37 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/04 21:53:13 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
public:
	Zombie(void);
	Zombie(std::string name, std::string type);
	~Zombie();
	void announce();

private:
	std::string _name;
	std::string _type;
};

#endif
