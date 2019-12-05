/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <msaliuta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 19:52:11 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/05 20:21:34 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

const int Fixed::_fracBits = 8;

Fixed::Fixed(){
    _val = 0;
    std::cout << "Default constructor called\n";
}

Fixed::~Fixed(){
    std::cout << "Destructor called\n";
}

Fixed & Fixed::operator=(Fixed const & f){
    std::cout << "Assignation operator called\n";
    _val = f.getRawBits();
    return (*this);
}

Fixed::Fixed(Fixed const & f){
    std::cout << "Copy constructor called\n";
    *this = f;
}

int	Fixed::getRawBits() const {
	std::cout << "getRawBits member function called\n";
	return (_val);
}

void	Fixed::setRawBits(int const & val){
	_val = val;
}