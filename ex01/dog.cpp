/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 18:29:34 by carbon-m          #+#    #+#             */
/*   Updated: 2025/12/13 22:15:49 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

dog::dog() : animal()
{
	this->type = "dog";
	std::cout << "dog class constructor called\n" << std::endl;
};

dog::dog(const dog &newdog) : animal(newdog)
{
	this->type = newdog.type;
	std::cout << "dog class copy constructor called\n" << std::endl;
};

dog &dog::operator= (const dog &copydog)
{
	if(this != &copydog)
		this->type = copydog.type;
	return *this;
};

dog::~dog()
{
	std::cout << "dog class destructor called" << std::endl;
};

void dog::makeSound() const
{
	std::cout << "Guau" << std::endl;
};
