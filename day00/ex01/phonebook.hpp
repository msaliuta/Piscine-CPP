/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <msaliuta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 20:24:56 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/02 23:05:13 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <string>

class	Info {

	public: 

		Info(void); 
		~Info(void);

		void	add_info(std::string, int i);
		std::string	get_info(int i);
        std::string get_firstname();
        void set_firstname(std::string _firstname);
        std::string get_lastname();
        void set_lastname(std::string _lastname);
        std::string get_nickname();
        void set_nickname(std::string _nickname);
        std::string get_login();
        void set_login(std::string _login);
        std::string get_address();
        void set_address(std::string _address);
        std::string get_email();
        void set_email(std::string _email);
        std::string get_phone();
        void set_phone(std::string _phone);
        std::string get_birthday();
        void set_birthday(std::string _birthday);
        std::string get_meal();
        void set_meal(std::string _meal);
        std::string get_panties();
        void set_panties(std::string _underwear_color);
        std::string get_secret();
        void set_secret(std::string _secret);

	private:

		std::string _firstname;
		std::string _lastname;
		std::string _nickname;
		std::string _login;
		std::string _address;
		std::string _email;
		std::string _phone;
		std::string _birthday;
		std::string _meal;
		std::string _underwear_color;
		std::string _secret;


};

class	Contact {

	public: 

		Info detail[8];

		Contact(void); 
		~Contact(void);

};

#endif