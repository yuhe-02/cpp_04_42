#ifndef __ICE_HPP__
# define __ICE_HPP__

#include "AMateria.hpp"
#include "ICharacter.hpp"
# include <string>
class Ice : public AMateria {
	public:
		Ice();
		~Ice();
		Ice(const Ice& other);
		Ice& operator=(const Ice &other);
		Ice* clone() const;
		void use(ICharacter& target);
};

#endif