/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 18:29:28 by carbon-m          #+#    #+#             */
/*   Updated: 2025/12/12 19:29:39 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

cat::cat() : animal()
{
	this->type = "cat";
	std::cout << "Cat class constructor called\n" << std::endl;
};

cat::cat(const cat &newcat) : animal(newcat)
{
	this->type = newcat.type;
	std::cout << "Cat class copy constructor called\n" << std::endl;
};

cat &cat::operator= (const cat &copycat)
{
	
};

cat::~cat()
{
	
};

cat makeSound()
{
	
};