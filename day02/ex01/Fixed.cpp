/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <msaliuta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 19:52:11 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/05 21:35:03 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
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

float	Fixed::toFloat() const {
	return (_val / (float)(1 << _fracBits));
}

int		Fixed::toInt() const {
	return (_val / (1 << _fracBits));
}

std::ostream & operator<<(std::ostream & out, Fixed const & f){
	out << f.toFloat();
	return (out);
}

Fixed::Fixed(int const val){
	_val = (val << _fracBits);
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(float const val){
	_val = (int)roundf(val * (1 << _fracBits));
	std::cout << "Float constructor called\n";
}
