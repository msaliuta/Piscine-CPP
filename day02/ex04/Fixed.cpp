/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <msaliuta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 22:02:29 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/05 22:08:18 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

const int Fixed::_fracBits = 8;

Fixed::Fixed()
{
	_val = 0;
}

Fixed::~Fixed()
{
}

Fixed & Fixed::operator=(Fixed const & f)
{
	_val = f.getRawBits();
	return (*this);
}

Fixed::Fixed(Fixed const & f)
{
	*this = f;
}

int Fixed::getRawBits() const
{
	return (_val);
}

void Fixed::setRawBits(int const & val)
{
	_val = val;
}

float Fixed::toFloat() const
{
	return (_val / (float)(1 << _fracBits));
}

int Fixed::toInt() const
{
	return (_val / (1 << _fracBits));
}

std::ostream & operator<<(std::ostream & out, Fixed const & f)
{
	out << f.toFloat();
	return (out);
}

Fixed::Fixed(int const val)
{
	_val = (val << _fracBits);
}

Fixed::Fixed(float const val)
{
	_val = (int)roundf(val * (1 << _fracBits));
}

Fixed & Fixed::operator++()
{
	_val++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	_val++;
	return (tmp);
}

Fixed & Fixed::operator--()
{
	_val--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	_val--;
	return (tmp);
}

Fixed Fixed::operator+ (Fixed const &f)
{
	return (Fixed(this->toFloat() + f.toFloat()));
}

Fixed Fixed::operator- (Fixed const &f)
{
	return (Fixed(this->toFloat() - f.toFloat()));
}

Fixed Fixed::operator* (Fixed const &f)
{
	return (Fixed(this->toFloat() * f.toFloat()));
}

Fixed Fixed::operator/ (Fixed const &f)
{
	return (Fixed(this->toFloat() / f.toFloat()));
}

bool Fixed::operator< (Fixed const &f)
{
	return (this->toFloat() < f.toFloat());
}

bool Fixed::operator<= (Fixed const &f)
{
	return (this->toFloat() <= f.toFloat());
}

bool Fixed::operator> (Fixed const &f)
{
	return (this->toFloat() > f.toFloat());
}

bool Fixed::operator>= (Fixed const &f)
{
	return (this->toFloat() >= f.toFloat());
}

bool Fixed::operator== (Fixed const &f)
{
	return (this->toFloat() == f.toFloat());
}

bool Fixed::operator!= (Fixed const &f)
{
	return (this->toFloat() != f.toFloat());
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	return ((a < b) ? a : b);
}

Fixed const & Fixed::min(Fixed const &a, Fixed const &b)
{
	return (((Fixed)a < (Fixed)b) ? a : b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	return ((a > b) ? a : b);
}

Fixed const & Fixed::max(Fixed const &a, Fixed const &b)
{
	return (((Fixed)a > (Fixed)b) ? a : b);
}

