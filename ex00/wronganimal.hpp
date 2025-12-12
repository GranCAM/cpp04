/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wronganimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 18:31:31 by carbon-m          #+#    #+#             */
/*   Updated: 2025/12/12 19:25:46 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class wrongAnimal
{
	protected:
		std::string type;
	public:
		wrongAnimal();
		wrongAnimal(const wrongAnimal &newwrongAnimal);
		wrongAnimal &operator= (const wrongAnimal &copywrongAnimal);
		~wrongAnimal();

		wrongAnimal makeSound();
};

#endif