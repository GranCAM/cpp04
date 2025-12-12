/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 18:29:31 by carbon-m          #+#    #+#             */
/*   Updated: 2025/12/12 18:31:47 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"

class cat : public animal
{
	public:
		cat();
		cat(const cat &newcat);
		cat &operator= (const cat &copycat);
		~cat();

		cat makeSound();
};

#endif