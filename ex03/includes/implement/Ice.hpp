#ifndef __ICE_HPP__
# define __ICE_HPP__

#include "AMateria.hpp"
class Ice : public AMateria {
	protected:
		//
	public:
		Ice();
		~Ice();
		Ice(const Ice& other);
		Ice& operator=(const Ice &other);
};

#endif