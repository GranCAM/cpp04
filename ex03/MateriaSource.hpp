

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "iostream"
#include "AMateria.hpp"
#include "Character.hpp"

class IMateriaSource
{
	protected:
		
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif