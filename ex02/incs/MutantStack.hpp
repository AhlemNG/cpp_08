/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:24:27 by anouri            #+#    #+#             */
/*   Updated: 2024/05/06 15:18:00 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <deque>
#include <stack>
#include<iostream>
#include "Colors.hpp"


/*
stack, queue and priority_queue are implemented as container adaptors.
Container adaptors are not full container classes, but classes that 
provide a specific interface relying on an object of one of the container
classes (such as deque or list) to handle the elements. The underlying 
container is encapsulated in such a way that its elements are accessed 
by the members of the container adaptor independently of the underlying container class used.*/

template< typename T, typename container = std::deque<T> >

class MutantStack : public std::stack<T, container>
{
    private:
        size_t _size;
    public:
        MutantStack(void){}
        ~MutantStack(){}
        MutantStack(const MutantStack &src): std::stack<T, container>(src){}
        MutantStack &operator=(const MutantStack &rhs)
        {
            if (this != &rhs)
            {
                std::stack<T, container>::operator=(rhs);
            }
            return(*this);    
        }

    /*public member functions*/
        bool empty() const
        {
            return(std::stack<T, container>::empty());
        }
        size_t size() const
        {
            return(std::stack<T, container>::size());
        }
        T& top() //this one
        {
            return(std::stack<T, container>::top());
        }
        const T& top() const // or this one
        {
            return(std::stack<T, container>::top());
        }
        void push (const T& val)
        {
            std::stack<T, container>::push(val);
        }
        // template <class... Args> void emplace (Args&&... args)
        // {
        //     std::stack<T, container>::emplace(args);
        // }
        void pop()
        {
            std::stack<T, container>::pop();
        }
        void swap (MutantStack& x)
        {
            std::stack<T, container>::swap(x);
        }
};


#endif