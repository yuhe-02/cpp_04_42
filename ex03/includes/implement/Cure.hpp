#ifndef __CURE_HPP__
# define __CURE_HPP__

#include "AMateria.hpp"
# include <string>
class Cure : public AMateria {
	public:
		Cure();
		~Cure();
		Cure(const Cure& other);
		// Cure(std::string const & type);
		Cure& operator=(const Cure &other);
		Cure* clone() const;
		// virtual void use(ICharacter& target);
};

#endif