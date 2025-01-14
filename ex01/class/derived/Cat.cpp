#include "../../includes/Cat.hpp"
#include <iostream>

Cat::Cat() : Animal() {
	this->brain = new Brain();
	this->type = "Cat";
	std::cout << "Cat: " << "Default Constructor called." << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other){
	if (other.brain != 0) {
		this->brain = new Brain();
		*this->brain = *other.brain;
	} else {
		this->brain = 0;
	}
	this->type = other.type;
	std::cout << "Cat: " << "Copy Constructor called." << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat: " << "Destructor called." << std::endl;
	delete brain;
}

Cat &Cat::operator=(const Cat &other) {
	std::cout << "Cat: " << "Copy assignment operator called." << std::endl;
	if (this != &other) {
		Animal::operator=(other);
		if (this->brain) {
			delete this->brain;
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

void Cat::makeSound() const {
	std::cout << this->getType() << ": "<< "Meow! Meow!" << std::endl;
}

void Cat::showBrain( void ) const {
	if (!this->brain) {
		std::cout << "Cat: " << "doesn't have brain." << std::endl;
		return ;
	}
	this->brain->showAll();
}

void Cat::randomSet( void ) {
	if (!this->brain) {
		std::cout << "Cat: " << "doesn't have brain." << std::endl;
		return ;
	}
	this->brain->setIdeas(0, "test");
	this->brain->setIdeas(2, "test1");
	this->brain->setIdeas(3, "test2");
	this->brain->setIdeas(4, "test3");
	this->brain->setIdeas(2, "test3");
}