/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 18:29:22 by carbon-m          #+#    #+#             */
/*   Updated: 2025/12/13 22:17:20 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

animal::animal()
{
	this->type = "animal";
	std::cout << "Animal class constructor called\n" << std::endl;
};

animal::animal(const animal &otherAnimal)
{
	this->type = otherAnimal.type;
	std::cout << "Animal class copy constructor called\n" << std::endl;
};

animal &animal::operator= (const animal &copyAnimal)
{
	if (this != &copyAnimal)
	{
		this->type = copyAnimal.type;
		std::cout << "Animal assigment operator called\n" << std::endl;
	}
	return *this;
};

animal::~animal()
{
    std::cout << "Animal destructor called" << std::endl;	
};

void animal::makeSound() const
{
	std::cout << "...some grunting..." << std::endl;
};

std::string animal::getType() const
{
	return this->type;
};
