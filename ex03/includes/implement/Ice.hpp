#ifndef __ICE_HPP__
# define __ICE_HPP__

#include "AMateria.hpp"
# include <string>
class Ice : public AMateria {
	public:
		Ice();
		~Ice();
		Ice(const Ice& other);
		// Cure(std::string const & type);
		Ice& operator=(const Ice &other);
		Ice* clone() const;
		// virtual void use(ICharacter& target);
};

#endif