/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <msaliuta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 19:52:19 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/05 19:59:40 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
    public:
        Fixed();
        Fixed(Fixed const & f);
        ~Fixed();
        int getRawBits() const;
        void setRawBits(int const & val);
        Fixed & operator=(Fixed const & f);
    private:
        int                 _val;
        static const int    _fracBits;
};

#endif
