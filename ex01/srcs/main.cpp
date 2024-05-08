/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:27:37 by anouri            #+#    #+#             */
/*   Updated: 2024/04/30 18:11:23 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Span.hpp"
#include <vector>


int *generate(unsigned int nbElements, int max)
{
    int *arr = new int[nbElements];
    srand(time(NULL));
    for (unsigned int i = 0; i < nbElements; ++i) {
        arr[i] = (rand() % max);
    }
    return(arr);
}

int main()
{
	
	{
		std::cout << "------------------------TEST-----------------------" << std::endl;
		try
		{
			Span sp = Span(3);
			sp.addNumber(120);
			sp.addNumber(120);
			sp.addNumber(120);
			sp.addNumber(120);
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
	}
	{	
		std::cout << "------------------------TEST-----------------------" << std::endl;
		try
		{
			Span sp = Span(0);
			int s = sp.shortestSpan();
			int l = sp.longestSpan();
			std::cout << "shortest Span = " << s << std::endl;
			std::cout << "longest Span = " << l << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
	}

	{
		std::cout << "------------------------TEST-----------------------" << std::endl;
		try
		{
			Span sp = Span(20);
			sp.addNumber(5);
			int s = sp.shortestSpan();
			int l = sp.longestSpan();
			std::cout << "shortest Span = " << s << std::endl;
			std::cout << "longest Span = " << l << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
	}
	{		
		std::cout << "------------------------TEST-----------------------" << std::endl;
		try
		{
			Span sp = Span(10);
			sp.addNumber(1);
			sp.addNumber(2);
			sp.addNumber(1);
			sp.addNumber(9);
			sp.addNumber(4);
			sp.addNumber(10);
			int s = sp.shortestSpan();
			int l = sp.longestSpan();
			std::cout << "shortest Span = " << s << std::endl;
			std::cout << "longest Span = " << l << std::endl;
			
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
	}
	{
		std::cout << "------------------------TEST-----------------------" << std::endl;
		try
		{
			Span sp = Span(5);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			int s = sp.shortestSpan();
			int l = sp.longestSpan();
			std::cout << "shortest Span = " << s << std::endl;
			std::cout << "longest Span = " << l << std::endl;
			
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
	}
	{
	try
	{
		int *arr = generate(10, 200);
		Span sp(10);
		sp.fillVector(arr, arr+9);
	 	 int s = sp.shortestSpan();
		int l = sp.longestSpan();
		std::cout << "shortest Span = " << s << std::endl;
		std::cout << "longest Span = " << l << std::endl;
		delete arr;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	}
	return (0);
}
