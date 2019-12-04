/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 22:28:34 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/04 22:28:36 by msaliuta         ###   ########.fr       */
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
	void setName(std::string name);

private:
	std::string _name;
	std::string _type;
};

#endif
