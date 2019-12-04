/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 20:52:21 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/04 20:52:22 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void ponyOnTheHeap()
{
	Pony *ponyOnStack = new Pony();
	std::cout << "Pony on heap:\nName -\t" << ponyOnStack->getName()
			  << "\nAge -\t" << ponyOnStack->getAge() << "\n";
	delete ponyOnStack;
}

void ponyOnTheStack()
{
	Pony ponyOnHeap("Sleipnir", 10000);
	std::cout << "Pony on stack:\nName -\t" << ponyOnHeap.getName()
			  << "\nAge -\t" << ponyOnHeap.getAge() << "\n";
}

int		main( void )
{
	ponyOnTheHeap();

	ponyOnTheStack();

	return 0;
}
