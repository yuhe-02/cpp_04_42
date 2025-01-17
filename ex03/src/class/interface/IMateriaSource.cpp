// TODO define cpp
#include "IMateriaSource.hpp"
#include <iostream>

IMateriaSource::IMateriaSource() {
	std::cout << "IMateriaSource: " << "Default Constructor called." << std::endl;
}
IMateriaSource::~IMateriaSource() {
	std::cout << "IMateriaSource: " << "Destructor called." << std::endl;
}
IMateriaSource::IMateriaSource(const IMateriaSource& other) {
	(void)other;
	std::cout << "IMateriaSource: " << "Copy Constructor called." << std::endl;
}
IMateriaSource& IMateriaSource::operator=(const IMateriaSource &other) {
	(void)other;
	std::cout << "IMateriaSource: " << "Copy assignment operator called." << std::endl;
	return (*this);
}
