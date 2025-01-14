#ifndef __CURE_HPP__
# define __CURE_HPP__

#include "AMateria.hpp"
class Cure : public AMateria {
	protected:
		//
	public:
		Cure();
		~Cure();
		Cure(const Cure& other);
		Cure& operator=(const Cure &other);
};

#endif