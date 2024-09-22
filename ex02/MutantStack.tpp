/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 20:26:27 by mahmoud           #+#    #+#             */
/*   Updated: 2024/09/22 20:32:46 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>   
MutantStack<T>::MutantStack( void ) : std::stack<T>() {}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &copyTemplate) : std::stack<T>(copyTemplate) {}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &initTemplate) 
{
	if (this != &initTemplate)
    {

		std::stack<T>::operator=(initTemplate);
	}
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() 
{
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() 
{
	return this->c.end();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const 
{
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const 
{
	return this->c.end();
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin() 
{
	return this->c.rbegin();
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend() 
{
	return this->c.rend();
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const 
{
	return this->c.rbegin();
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const 
{
	return this->c.rend();
}