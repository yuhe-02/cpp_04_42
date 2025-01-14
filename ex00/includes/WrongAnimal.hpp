#ifndef __WRONGANIMAL_HPP__
# define __WRONGANIMAL_HPP__

#include <string>

class WrongAnimal {
	protected :
		std::string type;
	public :
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal &operator=(const WrongAnimal &other);
		void makeSound() const;
		std::string getType( void ) const;
};

#endif