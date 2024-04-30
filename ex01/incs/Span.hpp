/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:28:13 by anouri            #+#    #+#             */
/*   Updated: 2024/04/30 17:47:19 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include "Colors.hpp"
#include <exception>
#include <vector>
#include <iostream>
#include <limits>

class Span
{
    private:
        std::vector<int> _span;
        unsigned int _N;
    
    public:
        Span();
        Span(const Span &src);
        Span &operator=(const Span &rhs);
        ~Span();
        Span(unsigned int N);
        class maxSizeAttained : public std::exception
        {
            public:
                using std::exception::what;
                const char *what() const throw();
        };
        class emptyVector : public std::exception
        {
            public:
                using std::exception::what;
                const char *what() const throw();
        };
        void addNumber(int nb);
        int shortestSpan();
        int longestSpan();
};

Span::Span(): _N(0)
{
    std::cout << BLUE << "Span Default constructor called" << RESET<< std::endl;
}


Span::Span(unsigned int N): _N(N)
{
    std::cout << BLUE << "Span parametric constructor called" << RESET<< std::endl;
    //il faut dire ici que vector a la taille N! comme nt faire > :'O
}

Span::Span(const Span &src)
{
    std::cout << BLUE << "Span copy constructor called" << RESET<< std::endl;
    _N = src._N;
    _span = src._span;// Copy assignation operator of std::vector automatically handles copying
}

Span &Span::operator=(const Span &rhs)
{
    std::cout << BLUE << "Span copy assignation operator constructor called" << RESET<< std::endl;
    if (this != &rhs)
    {
        _N = rhs._N;
        _span = rhs._span;// Copy assignation operator of std::vector automatically handles copying
    }
    return(*this);
}

Span::~Span()
{
    std::cout << YELLOW << "Span destructor called" << RESET<< std::endl;
}

const char *Span::maxSizeAttained::what() const throw()
{
    return ("exception : max size attained");
}

const char *Span::emptyVector::what() const throw()
{
    return ("exception : vector is empty or has one element");
}


void Span::addNumber(int nb)
{
    if (_span.size() == _N)
        throw(maxSizeAttained());
    _span.push_back(nb);    
}

int abs(int x)
{
 return((x < 0)? -x : x);   
}
int Span::shortestSpan()
{
    if (_span.size() == 0 || _span.size() == 1)
        throw(emptyVector());
    int shortestSpan = std::numeric_limits<int>::max();
    
    for (unsigned int i = 0; i < _span.size(); i++)
    {
        for (unsigned int j = i + 1; j < _span.size(); j++)
        {
            int spanDifference = abs(_span[i] - _span[j]);
            if (spanDifference < shortestSpan)
                shortestSpan = spanDifference ;
        }
    }
    return (shortestSpan);
}

int Span::longestSpan()
{
    if (_span.size() == 0 || _span.size() - 1 == 1)
        throw(emptyVector());
    int longestSpan = 0;
    for (unsigned int i = 0; i < _span.size(); i++)
    {
        for (unsigned int j = i + 1; j < _span.size(); j++)
        {
            int spanDifference = abs(_span[i] - _span[j]);
            if (spanDifference > longestSpan)
                longestSpan = spanDifference ;
        }
    }
    return (longestSpan);
}
#endif