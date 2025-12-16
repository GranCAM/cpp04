#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "animal.hpp"

class brain
{
	private:
		std::string ideas[100];
	public:
		brain ();
		brain (const brain &newBrain);
		brain &operator=(const brain &otherbrain);
		~brain ();

		void setIdea(std::string idea);
};

#endif