/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongcat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 18:31:33 by carbon-m          #+#    #+#             */
/*   Updated: 2025/12/14 20:08:09 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongcat.hpp"

wrongCat::wrongCat() : wrongAnimal()
{
	this->type = "wrongCat";
	std::cout << "wrongCat class constructor called\n" << std::endl;
};

wrongCat::wrongCat(const wrongCat &newwrongCat) : wrongAnimal(newwrongCat)
{
	this->type = newwrongCat.type;
	std::cout << "wrongCat class copy constructor called\n" << std::endl;
};

wrongCat &wrongCat::operator= (const wrongCat &copywrongCat)
{
	if(this != &copywrongCat)
	{
		this->type = copywrongCat.type;
	}
	return *this;
};

wrongCat::~wrongCat()
{
	std::cout << "wrongCat class destructor called" << std::endl;
}

void wrongCat::makeSound() const
{
	std::cout << "Wrong Miau" << std::endl;
}
