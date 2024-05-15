/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:24:27 by anouri            #+#    #+#             */
/*   Updated: 2024/05/15 15:50:46 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include<iostream>
#include<iterator>
#include "Colors.hpp"


/*
stack, queue and priority_queue are implemented as container adaptors.
Container adaptors are not full container classes, but classes that 
provide a specific interface relying on an object of one of the container
classes (such as deque or list) to handle the elements. The underlying 
container is encapsulated in such a way that its elements are accessed 
by the members of the container adaptor independently of the underlying container class used.*/

template< typename T>

class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        MutantStack(void){}
        ~MutantStack(){}
        MutantStack(const MutantStack &src): std::stack<T>(src){}
        MutantStack &operator=(const MutantStack &rhs)
        {
            if (this != &rhs)
            {
                std::stack<T>::operator=(rhs);
            }
            return(*this);    
        }
        /*iterators*/
        iterator begin() {
            return (this->c.begin());
        }

        iterator end() {
            return (this->c.end());
        }
};


#endif