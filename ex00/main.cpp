/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:08:05 by mabdelsa          #+#    #+#             */
/*   Updated: 2024/09/22 16:38:01 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main() 
{
    try {
        std::vector<int> vec;
        vec.push_back(1);
        vec.push_back(2);
        vec.push_back(3);
        vec.push_back(4);
        vec.push_back(5);
        std::cout << "Testing with vector...\n";
        std::vector<int>::iterator vecIt = easyfind(vec, 3);
        std::cout << "Found in vector: " << *vecIt << std::endl;

        std::list<int> lst;
        lst.push_back(10);
        lst.push_back(20);
        lst.push_back(30);
        lst.push_back(40);
        lst.push_back(50);
        std::cout << "\nTesting with list...\n";
        std::list<int>::iterator listIt = easyfind(lst, 40);
        std::cout << "Found in list: " << *listIt << std::endl;

        std::cout << "\nTesting with vector for element not present...\n";
        easyfind(vec, 100);
    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
