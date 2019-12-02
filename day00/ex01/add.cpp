/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <msaliuta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 22:46:36 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/02 23:05:10 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "phonebook.hpp"

std::string Info::get_firstname()
{
    return this->_firstname;
}

void Info::set_firstname(std::string _firstname)
{
    this->_firstname = _firstname;
}

std::string Info::get_lastname()
{
    return this->_lastname;
}

void Info::set_lastname(std::string _lastname)
{
    this->_lastname = _lastname;
}

std::string Info::get_nickname()
{
    return this->_nickname;
}

void Info::set_nickname(std::string _nickname)
{
    this->_nickname = _nickname;
}

std::string Info::get_login()
{
    return this->_login;
}

void Info::set_login(std::string _login)
{
    this->_login = _login;
}

std::string Info::get_address()
{
    return this->_address;
}

void Info::set_address(std::string _address)
{
    this->_address = _address;
}

std::string Info::get_email()
{
    return this->_email;
}

void Info::set_email(std::string _email)
{
    this->_email = _email;
}

std::string Info::get_phone()
{
    return this->_phone;
}

void Info::set_phone(std::string _phone)
{
    this->_phone = _phone;
}

std::string Info::get_birthday()
{
    return this->_birthday;
}

void Info::set_birthday(std::string _birthday)
{
    this->_birthday = _birthday;
}

std::string Info::get_meal()
{
    return this->_meal;
}

void Info::set_meal(std::string _meal)
{
    this->_meal = _meal;
}

std::string Info::get_panties()
{
    return this->_underwear_color;
}

void Info::set_panties(std::string _underwear_color)
{
    this->_underwear_color = _underwear_color;
}

std::string Info::get_secret()
{
    return this->_secret;
}

void Info::set_secret(std::string _secret)
{
    this->_secret = _secret;
}
