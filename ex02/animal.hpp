/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 18:29:26 by carbon-m          #+#    #+#             */
/*   Updated: 2025/12/16 17:18:11 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class animal
{
	protected:
		std::string type;
	public:
		animal();
		animal(const animal &newAnimal);
		animal &operator= (const animal &copyAnimal);
		virtual ~animal();

		virtual void makeSound() const = 0;
		std::string getType() const;
};

#endif