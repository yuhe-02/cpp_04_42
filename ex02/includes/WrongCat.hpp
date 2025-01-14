#ifndef __WRONGCAT_HPP__
# define __WRONGCAT_HPP__

#include <string>
#include "./WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public :
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat &other);
		WrongCat &operator=(const WrongCat &other);
		void makeSound() const;
};

#endif