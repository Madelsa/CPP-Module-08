/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:08:03 by mabdelsa          #+#    #+#             */
/*   Updated: 2024/09/22 16:36:45 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <exception>
# include <algorithm>
# include <vector>
# include <list>

class NotFoundException : public std::exception 
{
    public:
        const char* what() const throw() 
        {
            return "Element not found!";
        }
};

template<typename T> 
typename T::iterator easyfind(T &container, int value) 
{

	typename T::iterator iter = std::find( container.begin(), container.end(), value );

	if (iter == container.end()) {

		throw NotFoundException();
	}
	return iter;
}

#endif