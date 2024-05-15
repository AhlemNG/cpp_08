/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:27:37 by anouri            #+#    #+#             */
/*   Updated: 2024/05/15 17:07:57 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Span.hpp"
#include <vector>

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
		std::cout << "------------------------TEST-----------------------" << std::endl;
		try
		{
			Span sp = Span(10000);
			std::vector<int> myVector;
			srand(time(NULL));
			for (int i = 0; i < 10000; i++)
				myVector.push_back(rand() % 99999);
			sp.fillVector(myVector.begin() ,myVector.end());
			
			int s = sp.shortestSpan();
			int l = sp.longestSpan();
			std::cout << "shortest Span = " << s << std::endl;
			std::cout << "longest Span = " << l << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
	return (0);
}
