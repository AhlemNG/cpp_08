/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:24:54 by anouri            #+#    #+#             */
/*   Updated: 2024/04/30 17:23:12 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Span.hpp"


Span::Span()
{
    std::cout << BLUE << "Span Default constructor called" << std::endl;
}


Span::Span(unsigned int N): _N(N)
{
    std::cout << BLUE << "Span parametric constructor called" << std::endl;
    //il faut dire ici que vector a la taille N! comme nt faire > :'O
}

Span::Span(const Span &src)
{
    std::cout << BLUE << "Span copy constructor called" << std::endl;
    _N = src._N;
    _span = src._span;// Copy assignation operator of std::vector automatically handles copying
}

Span &Span::operator=(const Span &rhs)
{
    std::cout << BLUE << "Span copy assignation operator constructor called" << std::endl;
    if (this != &rhs)
    {
        _N = rhs._N;
        _span = rhs._span;// Copy assignation operator of std::vector automatically handles copying
    }
    return(*this);
}

Span::~Span()
{
    std::cout << BLUE << "Span destructor called" << std::endl;
}

const char *Span::maxSizeAttained::what() const throw()
{
    return ("exception : max size attained");
}

void Span::addNumber(int nb)
{
    if (_span.size() == _N)
        throw(maxSizeAttained());
    _span.push_back(nb);    
}


int Span::shortestSpan()
{
    int shortestSpan = std::numeric_limits<int>::min();
    
    for (unsigned int i; i < _span.size(); i++)
    {
      if (_span[i] - _span[i + 1] < shortestSpan)
        shortestSpan =  _span[i] - _span[i + 1];
    }
}
// int Span::longestSpan()
// {
    
// }










