/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wronganimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 18:31:28 by carbon-m          #+#    #+#             */
/*   Updated: 2025/12/13 22:20:16 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wronganimal.hpp"

wrongAnimal::wrongAnimal()
{
	this->type = "wrongAnimal";
	std::cout << "wrongAnimal class constructor called\n" << std::endl;
};

wrongAnimal::wrongAnimal(const wrongAnimal &otherwrongAnimal)
{
	this->type = otherwrongAnimal.type;
	std::cout << "wrongAnimal class copy constructor called\n" << std::endl;
};

wrongAnimal &wrongAnimal::operator= (const wrongAnimal &copywrongAnimal)
{
	if (this != &copywrongAnimal)
	{
		this->type = copywrongAnimal.type;
		std::cout << "wrongAnimal assigment operator called\n" << std::endl;
	}
	return *this;
};

wrongAnimal::~wrongAnimal()
{
    std::cout << "wrongAnimal destructor called" << std::endl;	
};

void wrongAnimal::makeSound() const
{
	std::cout << "...wrong grunting?..." << std::endl;
};

std::string wrongAnimal::getType() const
{
	return this->type;
};
