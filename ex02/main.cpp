/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 20:22:51 by mahmoud           #+#    #+#             */
/*   Updated: 2024/09/23 13:24:23 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main() 
{
    std::cout << "### Basic Stack Operations ###" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    
    std::cout << "Top element: " << mstack.top() << std::endl;    
    mstack.pop();
    std::cout << "Size after pop: " << mstack.size() << std::endl;
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    std::cout << "\n### Iterator Functionality ###" << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    std::cout << "Iterating through stack elements:" << std::endl;
    while (it != ite) 
    {
        std::cout << *it << std::endl;
        ++it;
    }
    
    std::cout << "\n### Reverse Iterator Functionality ###" << std::endl;
    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();
    std::cout << "Iterating through stack elements in reverse:" << std::endl;
    while (rit != rite) 
    {
        std::cout << *rit << std::endl;
        rit++;
    }
    
    std::cout << "\n### Copy Constructor ###" << std::endl;
    MutantStack<int> mstack_copy(mstack);
    std::cout << "Elements in copied stack:" << std::endl;
    for (MutantStack<int>::iterator cit = mstack_copy.begin(); cit != mstack_copy.end(); cit++) 
    {
        std::cout << *cit << std::endl;
    }
    
    std::cout << "\n### Assignment Operator ###" << std::endl;
    MutantStack<int> mstack_assigned;
    mstack_assigned = mstack;
    std::cout << "Elements in assigned stack:" << std::endl;
    for (MutantStack<int>::iterator ait = mstack_assigned.begin(); ait != mstack_assigned.end(); ait++) {
        std::cout << *ait << std::endl;
    }
    
    std::cout << "\n### Compatibility with std::stack ###" << std::endl;
    std::stack<int> s(mstack);
    std::cout << "Top element of std::stack: " << s.top() << std::endl;
}

