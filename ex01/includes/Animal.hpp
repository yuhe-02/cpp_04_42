#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__

#include <string>
#include "Brain.hpp"

class Animal {
	protected :
		std::string type;
	public :
		Animal();
		virtual ~Animal();
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);
		virtual	void makeSound() const;
		std::string getType( void ) const;
};

#endif