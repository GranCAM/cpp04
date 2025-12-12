/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongcat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 18:31:36 by carbon-m          #+#    #+#             */
/*   Updated: 2025/12/12 19:25:59 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "wronganimal.hpp"

class wrongCat : public wrongAnimal
{
	public:
		wrongCat();
		wrongCat(const wrongCat &newwrongCat);
		wrongCat &operator= (const wrongCat &copywrongCat);
		~wrongCat();

		wrongCat makeSound();
};

#endif