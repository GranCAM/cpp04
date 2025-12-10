/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 18:29:26 by carbon-m          #+#    #+#             */
/*   Updated: 2025/12/10 18:47:39 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class animal
{
	public:
		animal();
		animal(animal &newanimal);
		animal &operator= (const animal &copyanimal);
		~animal();

		animal makeSound();
	private:
	
};

#endif