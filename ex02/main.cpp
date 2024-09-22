/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 20:22:51 by mahmoud           #+#    #+#             */
/*   Updated: 2024/09/22 20:39:19 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main() {
    // Test 1: Basic stack operations
    std::cout << "### Basic Stack Operations ###" << std::endl;
    
    MutantStack<int> mstack;
    
    // Push elements onto the stack
    mstack.push(5);
    mstack.push(17);
    
    // Check the top element
    std::cout << "Top element: " << mstack.top() << std::endl;
    
    // Pop the top element
    mstack.pop();
    
    // Check size after popping
    std::cout << "Size after pop: " << mstack.size() << std::endl;
    
    // Push more elements
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    
    // Test 2: Iterator functionality
    std::cout << "\n### Iterator Functionality ###" << std::endl;
    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    std::cout << "Iterating through stack elements:" << std::endl;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
    
    // Test 3: Reverse Iterator functionality
    std::cout << "\n### Reverse Iterator Functionality ###" << std::endl;
    
    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();
    
    std::cout << "Iterating through stack elements in reverse:" << std::endl;
    while (rit != rite) {
        std::cout << *rit << std::endl;
        ++rit;
    }
    
    // Test 4: Copy constructor
    std::cout << "\n### Copy Constructor ###" << std::endl;
    
    MutantStack<int> mstack_copy(mstack);
    
    std::cout << "Elements in copied stack:" << std::endl;
    for (MutantStack<int>::iterator cit = mstack_copy.begin(); cit != mstack_copy.end(); ++cit) {
        std::cout << *cit << std::endl;
    }
    
    // Test 5: Assignment operator
    std::cout << "\n### Assignment Operator ###" << std::endl;
    
    MutantStack<int> mstack_assigned;
    mstack_assigned = mstack;
    
    std::cout << "Elements in assigned stack:" << std::endl;
    for (MutantStack<int>::iterator ait = mstack_assigned.begin(); ait != mstack_assigned.end(); ++ait) {
        std::cout << *ait << std::endl;
    }
    
    // Test 6: Compatibility with std::stack (as it's inherited)
    std::cout << "\n### Compatibility with std::stack ###" << std::endl;
    
    std::stack<int> s(mstack);
    std::cout << "Top element of std::stack: " << s.top() << std::endl;
    
    return 0;
}

