/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:12:08 by anouri            #+#    #+#             */
/*   Updated: 2024/04/25 15:30:58 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <exception>
#include <algorithm>

class targetNotFound : public std::exception
{
    public:
        using exception ::what;
        const char *what() const throw()
        {
            return ("Target not found");
        }    
};

template <typename T>

unsigned int easyfind(T container, int target)
{
    typename T::iterator it = std::find(container.begin(), container.end(), target);
    if (it != container.end())
        return(it - container.begin() + 1);
    else
        throw(targetNotFound());
}


#endif