#ifndef __CURE_HPP__
# define __CURE_HPP__

#include "AMateria.hpp"
#include "ICharacter.hpp"
# include <string>
class Cure : public AMateria {
	public:
		Cure();
		~Cure();
		Cure(const Cure& other);
		Cure& operator=(const Cure &other);
		Cure* clone() const;
		void use(ICharacter& target);
};

#endif