#include <iostream>
#include "Cure.hpp"
#include "Ice.hpp"
#include "AMateria.hpp"

int main()
{
	{
		std::cout << "------instance test------" << std::endl;
		AMateria *i = new Ice();
		AMateria *j = new Cure();
		std::cout << "Ice: " << i->getType() << std::endl;
		std::cout << "Cure: " << j->getType() << std::endl;

		delete i;
		delete j;
	}
	{
		std::cout << "------default constructor test------" << std::endl;
		Ice ice;
		Cure cure;
		std::cout << "Ice: " << ice.getType() << std::endl;
		std::cout << "Cure: " << cure.getType() << std::endl;
	}
	{
		std::cout << "------copy assignment test------" << std::endl;
		Ice ice;
		Cure cure;
		Ice ice2 = ice;
		Cure cure2 = cure;
		std::cout << "Ice: " << ice2.getType() << std::endl;
		std::cout << "Cure: " << cure2.getType() << std::endl;
	}
	{
		std::cout << "------copy constructor test------" << std::endl;
		Ice ice;
		Cure cure;
		Ice ice3(ice);
		Cure cure3(cure);
		std::cout << "Ice: " << ice3.getType() << std::endl;
		std::cout << "Cure: " << cure3.getType() << std::endl;
	}
	return 0;
}
