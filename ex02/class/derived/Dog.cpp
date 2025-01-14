#include "../../includes/Dog.hpp"
#include <iostream>

Dog::Dog() : Animal() {
	this->brain = new Brain();
	this->type = "Dog";
	std::cout << "Dog: " << "Default Constructor called." << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
	if (other.brain != 0) {
		this->brain = new Brain();
		*this->brain = *other.brain;
	} else {
		this->brain = 0;
	}
	this->type = other.type;
	std::cout << "Dog: " << "Copy Constructor called." << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog: " << "Destructor called." << std::endl;
	delete brain;
}

Dog &Dog::operator=(const Dog &other) {
	std::cout << "Dog: " << "Copy assignment operator called." << std::endl;
	if (this != &other) {
		Animal::operator=(other);
		if (this->brain) {
			delete brain;
		}
		if (other.brain != 0) {
			this->brain = new Brain();
			*this->brain = *other.brain;
		} else {
			this->brain = 0;
		}
		this->type = other.type;
	}
	return (*this);
}

void Dog::makeSound() const{
	std::cout << this->getType() << ": "<< "Woof! Woof!" << std::endl;
}

void Dog::showBrain( void ) const {
	if (!this->brain) {
		std::cout << "Dog: " << "doesn't have brain." << std::endl;
		return ;
	}
	this->brain->showAll();
}

void Dog::randomSet( void ) {
	if (!this->brain) {
		std::cout << "Dog: " << "doesn't have brain." << std::endl;
		return ;
	}
	this->brain->setIdeas(0, "dog");
	this->brain->setIdeas(2, "dog1");
	this->brain->setIdeas(3, "dog2");
	this->brain->setIdeas(4, "dog3");
}
