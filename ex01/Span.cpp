/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:39:12 by mabdelsa          #+#    #+#             */
/*   Updated: 2024/09/22 20:12:15 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(0) {}

Span::Span(unsigned int n) : N(n) {}

Span::Span(const Span& copyTemplate) : N(copyTemplate.N), numVect(copyTemplate.numVect) {}

Span& Span::operator=(const Span& initTemplate) 
{
    if (this != &initTemplate) 
    {
        this->N = initTemplate.N;
        this->numVect = initTemplate.numVect;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int number) 
{
    if (numVect.size() >= N) 
    {
        throw std::logic_error("Vector is full.");
    }
    numVect.push_back(number);
}

unsigned int Span::shortestSpan() const 
{
    if (numVect.size() < 2) 
    {
        throw std::logic_error("Insufficient entrys to find span.");
    }
    std::vector<int> sorted = numVect;
    std::sort(sorted.begin(), sorted.end());
    unsigned int minSpan = std::numeric_limits<unsigned int>::max();
    for (size_t i = 0; i < sorted.size() - 1; i++) 
    {
        unsigned int span = sorted[i + 1] - sorted[i];
        if (span < minSpan) 
        {
            minSpan = span;
        }
    }
    return minSpan;
}

unsigned int Span::longestSpan() const 
{
    if (numVect.size() < 2) 
    {
        throw std::logic_error("Insufficient entrys to find span.");
    }
    int min = *std::min_element(numVect.begin(), numVect.end());
    int max = *std::max_element(numVect.begin(), numVect.end());
    return max - min;
}

void	Span::print() const 
{
	for (unsigned int i = 0; i < numVect.size(); i++)
	{
		std::cout << numVect[i] << std::endl;
	}
}

void	Span::generateNums(int min, int max) 
{
	srand(time(NULL));
	for (unsigned int i = numVect.size(); i < N; i++)
	{
		numVect.push_back(std::rand() % (max - min + 1) + min);
	}
}

