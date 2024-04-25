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

/*In C++, auto is a keyword used for automatic type inference. 
When auto is used to declare a variable, the type of the variable
is automatically deduced from its initializer.
the type of it will be automatically deduced to be an iterator
to elements of the container.
This is a convenient way to declare variables when the type is
either long or complex and can be inferred from the context.*/

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