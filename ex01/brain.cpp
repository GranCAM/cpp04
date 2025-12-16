
#include "brain.hpp"

brain::brain()
{
	int i;
	for (i = 0; i < 100; ++i)
		this->ideas[i] = "airhead";
	std::cout << "brain constructor called\n" << std::endl;
};

brain::brain (const brain &newBrain)
{
	int i;
	for (i = 0; i < 100; ++i)
		this->ideas[i] = newBrain.ideas[i];
	std::cout << "Brain copy constructor called\b" << std::endl;
};

brain &brain::operator= (const brain &otherBrain)
{
	int i;
	for (i = 0; i < 100; ++i)
		
};