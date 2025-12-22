/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 18:29:34 by carbon-m          #+#    #+#             */
/*   Updated: 2025/12/20 13:50:47 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"
#include "brain.hpp"

dog::dog() : animal()
{
	this->type = "dog";
	this->dbrain = new brain();
	std::cout << "dog class constructor called\n" << std::endl;
};

dog::dog(const dog &newdog) : animal(newdog)
{
	this->type = newdog.type;
	this->dbrain = new brain(*(newdog.dbrain));
	std::cout << "dog class copy constructor called\n" << std::endl;
};

dog &dog::operator= (const dog &copydog)
{
	if(this != &copydog)
	{
		this->type = copydog.type;
		delete this->dbrain;
		this->dbrain = new brain(*(copydog.dbrain));
		std::cout << "Dog class assignment operator called\n" << std::endl;
	}
	return *this;
};

dog::~dog()
{
	delete this->dbrain;
	std::cout << "dog class destructor called" << std::endl;
};

void dog::makeSound() const
{
	std::cout << "Guau" << std::endl;
};
