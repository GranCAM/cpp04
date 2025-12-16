/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 18:29:36 by carbon-m          #+#    #+#             */
/*   Updated: 2025/12/16 16:18:53 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "animal.hpp"
#include "brain.hpp"

class dog : public animal
{
	public:
		dog();
		dog(const dog &newdog);
		dog &operator= (const dog &copydog);
		~dog();

		void makeSound() const;
	private:
		brain *dbrain;
};

#endif