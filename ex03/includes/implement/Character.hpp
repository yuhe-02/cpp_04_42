#ifndef __CHARACTER_HPP__
# define __CHARACTER_HPP__


#include "ICharacter.hpp"
class Character : public ICharacter {
	protected:
		//
	public:
		Character();
		~Character();
		Character(const Character& other);
		Character& operator=(const Character &other);
};
#endif