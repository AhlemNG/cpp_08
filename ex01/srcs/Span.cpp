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

const char *Span::tooSmall::what() const throw()
{
    return ("exception : vector size is smaller then argument");
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

void Span::fillVector(int *first, int *last)
{
    // if (nbElements > _N)
    //     throw(tooSmall());
    
    this->_span.insert (this->_span.begin() ,first, last);
     std::cout << "myvector contains: \n";
    // std::vector<int>::iterator it;
    // for (it=_span.begin(); it<_span.end(); it++)
    //     std::cout << ' ' << *it;
    // std::cout << '\n';
}



// ofstean &operator<<(ofsteam &o, std::vector<int> rhs)
// {
//     o << "myvector contains: \n";
//     std::vector<int>::iterator it;
//     for (it=_span.begin(); it<_span.end(); it++)
//         o << ' ' << *it;
//         o << '\n';
//     return o;
// }

