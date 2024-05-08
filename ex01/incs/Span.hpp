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
#include <algorithm>

class Span
{
    private:
        std::vector<int> _span;
        unsigned int _N;
        Span();
    public:
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
        class tooSmall : public std::exception
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
        void fillVector(int * first, int * last);
};

#endif