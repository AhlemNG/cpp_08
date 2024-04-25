/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:39:56 by anouri            #+#    #+#             */
/*   Updated: 2024/04/25 15:32:30 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/easyfind.hpp"
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    a.push_back(6);
    a.push_back(7);
    a.push_back(8);
    a.push_back(9);
    a.push_back(10);

    try
    {
        int j = easyfind< std::vector<int> >(a, 9);
        std::cout << "target is at position : " << j << std::endl;    
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        int j = easyfind<std::vector<int> >(a, 20);
        std::cout << "target is at position : " << j << std::endl;    
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}