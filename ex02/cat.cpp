/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 18:29:28 by carbon-m          #+#    #+#             */
/*   Updated: 2025/12/16 16:25:48 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"
#include "brain.hpp"

cat::cat() : animal()
{
	this->type = "cat";
	this->cbrain = new brain();
	std::cout << "Cat class constructor called\n" << std::endl;
};

cat::cat(const cat &newcat) : animal(newcat)
{
	this->type = newcat.type;
	this->cbrain = new brain(*(newcat.cbrain));
	std::cout << "Cat class copy constructor called\n" << std::endl;
};

cat &cat::operator= (const cat &copycat)
{
	if(this != &copycat)
	{
		this->type = copycat.type;
		delete this->cbrain;
		this->cbrain = new brain(*(copycat.cbrain));
		std::cout << "Cat class assignment operator called\n" << std::endl;
	}
	return *this;
};

cat::~cat()
{
	delete this->cbrain;
	std::cout << "Cat class destructor called" << std::endl;
};

void cat::makeSound() const
{
	std::cout << "Miau" << std::endl;
};
