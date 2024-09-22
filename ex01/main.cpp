/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:38:58 by mabdelsa          #+#    #+#             */
/*   Updated: 2024/09/22 17:14:31 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main( void ) 
{

	Span s1 = Span(5);
	Span s2 = Span(5);

	try {

		s1.addNumber(6);
		s1.addNumber(3);
		s1.addNumber(17);
		s1.addNumber(9);
		s1.addNumber(11);
        

		std::cout << "shortest span s1: " << s1.shortestSpan() << std::endl;
		std::cout << "longest span s1: " << s1.longestSpan() << std::endl;
	    std::cout << std::endl;

		s2.generateNums(-1000, 1000);
        s2.print();
	    std::cout << std::endl;
		std::cout << "shortest span s2: " << s2.shortestSpan() << std::endl;

		std::cout << "longest span s2: " << s2.longestSpan() << std::endl;
	} catch (std::exception &e) {

		std::cout << e.what() << std::endl;
	}
	return 0;
}