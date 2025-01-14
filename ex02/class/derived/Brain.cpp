#include "../../includes/Brain.hpp"
#include <iostream>

Brain::Brain() {
	std::cout << "Brain: " << "Default Constructor called." << std::endl;
}

Brain::Brain(const Brain &other) {
	std::cout << "Brain: " << "Copy Constructor called." << std::endl;
	for (int i = 0; i < NEURON; ++i) {
	    this->ideas[i] = other.ideas[i];
	}
}

Brain::~Brain() {
	std::cout << "Brain: " << "Destructor called." << std::endl;
}

Brain &Brain::operator=(const Brain &other) {
	std::cout << "Brain: " << "Copy assignment operator called." << std::endl;
	if (this != &other) {
		for (int i = 0; i < NEURON; ++i) {
            this->ideas[i] = other.ideas[i];
        }
	}
	return (*this);
}

void	Brain::setIdeas(const int index, const std::string &str) {
	if (index >= NEURON || index < 0) {
		std::cout << "Brain: " << "failed to set variable in ideas member." << std::endl;
		return ;
	}
	this->ideas[index] = str;
}

const std::string &Brain::getIdeas(const int index) const {
	static const std::string empty = ""; 
	if (index >= NEURON || index < 0) {
		std::cout << "Brain: " << "failed to get variable in ideas member." << std::endl;
		return (empty);
	}
	return (this->ideas[index]);
}

void Brain::showAll( void ) const {
	std::cout << "Brain: " << "show all called." << std::endl;
	for (int i = 0; i < NEURON; ++i) {
		if (!this->ideas[i].empty()) {
			std::cout << i << ": " << this->ideas[i] << std::endl;
		}
	}
}
