#include <iostream>
#include "Cure.hpp"
#include "Ice.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

// int main()
// {
// 	{
// 		std::cout << "------instance test------" << std::endl;
// 		AMateria *i = new Ice();
// 		AMateria *j = new Cure();
// 		std::cout << "Ice: " << i->getType() << std::endl;
// 		std::cout << "Cure: " << j->getType() << std::endl;

// 		delete i;
// 		delete j;
// 	}
// 	{
// 		std::cout << "------default constructor test------" << std::endl;
// 		Ice ice;
// 		Cure cure;
// 		std::cout << "Ice: " << ice.getType() << std::endl;
// 		std::cout << "Cure: " << cure.getType() << std::endl;
// 	}
// 	{
// 		std::cout << "------copy assignment test------" << std::endl;
// 		Ice ice;
// 		Cure cure;
// 		Ice ice2;
// 		Cure cure2;
// 		ice2 = ice;
// 		cure2 = cure;
// 		std::cout << "Ice: " << ice2.getType() << std::endl;
// 		std::cout << "Cure: " << cure2.getType() << std::endl;
// 	}
// 	{
// 		std::cout << "------copy constructor test------" << std::endl;
// 		Ice ice;
// 		Cure cure;
// 		Ice ice3(ice);
// 		Cure cure3(cure);
// 		std::cout << "Ice: " << ice3.getType() << std::endl;
// 		std::cout << "Cure: " << cure3.getType() << std::endl;
// 	}
// 	return 0;
// }

// int main()
// {
// 	{
// 		std::cout << "------instance test------" << std::endl;
// 		ICharacter *i = new Character();
// 		ICharacter *j = new Character("www");
// 		std::cout << "Character: " << i->getName() << std::endl;
// 		std::cout << "Character: " << j->getName() << std::endl;

// 		delete i;
// 		delete j;
// 	}
// 	{
// 		std::cout << "------default constructor test------" << std::endl;
// 		Character character;
// 		std::cout << "Character: " << character.getName() << std::endl;
// 	}
// 	{
// 		std::cout << "------copy assignment test------" << std::endl;
// 		Character character("origin");
// 		Character character2 = character;
// 		std::cout << "Character: " << character2.getName() << std::endl;
// 	}
// 	{
// 		std::cout << "------copy constructor test------" << std::endl;
// 		Character character("origins");
// 		Character character3(character);
// 		std::cout << "Character: " << character3.getName() << std::endl;
// 	}
// 	return 0;
// }

// TODO create test case
// int main()
// {
// 	{
// 		std::cout << "------instance test------" << std::endl;
// 		ICharacter *i = new Character();
// 		AMateria *j1 = new Ice();
// 		AMateria *j2 = new Ice();
// 		AMateria *j3 = new Ice();
// 		AMateria *j4 = new Cure();
// 		i->equip(j1);
// 		i->equip(j2);
// 		i->equip(j3);
// 		i->equip(j4);
// 		i->equip(0);

// 		delete i;
// 		delete j1;
// 		delete j2;
// 		delete j3;
// 		delete j4;
// 	}
// 	{
// 		std::cout << "------instance test------" << std::endl;
// 		Character i;
// 		AMateria *j1 = new Ice();
// 		AMateria *j2 = new Ice();
// 		AMateria *j3 = new Ice();
// 		AMateria *j4 = new Cure();
// 		i.equip(j1);
// 		i.equip(j2);
// 		i.equip(j3);
// 		i.equip(j4);
// 		i.equip(0);

// 		Character i2 = i;
// 		i2 = i;
// 		i2.equip(j1);

// 		delete j1;
// 		delete j2;
// 		delete j3;
// 		delete j4;
// 	}
// 	{
// 		std::cout << "------instance test------" << std::endl;
// 		Character i;
// 		AMateria *j1 = new Ice();
// 		AMateria *j2 = new Ice();
// 		AMateria *j3 = new Ice();
// 		AMateria *j4 = new Cure();
// 		i.equip(j1);
// 		i.equip(j2);
// 		i.equip(j3);
// 		i.equip(j4);

// 		i.use(1, i);
// 		i.unequip(1);
// 		i.unequip(1);

// 		delete j1;
// 		delete j2;
// 		delete j3;
// 		delete j4;
// 	}
// 	{
// 		std::cout << "------instance test------" << std::endl;
// 		Character i;
// 		AMateria *j1 = new Ice();
// 		AMateria *j2 = new Ice();
// 		AMateria *j3 = new Ice();
// 		AMateria *j4 = new Cure();
// 		i.equip(j1);
// 		i.equip(j2);
// 		i.equip(j3);
// 		i.equip(j4);
// 		delete j4;
// 		j4 = 0;
// 		i.use(4, i);
// 		i.unequip(1);
// 		i.unequip(1);

// 		delete j1;
// 		delete j2;
// 		delete j3;
// 		delete j4;
// 	}
// 	{
// 		std::cout << "------instance test------" << std::endl;
// 		Character i;
// 		AMateria *j1 = new Ice();
// 		AMateria *j2 = new Ice();
// 		AMateria *j3 = new Ice();
// 		AMateria *j4 = new Cure();
// 		i.equip(j1);
// 		i.equip(j2);
// 		i.equip(j3);
// 		i.equip(j4);
// 		Character i2(i);
		
// 		AMateria *tmp = i2.getEquipment(1);
// 		i2.unequip(1);
// 		i.unequip(1);
// 		i2 = i;
// 		i = i2;
// 		i2 = i;
// 		delete tmp;
// 		delete j1;
// 		delete j2;
// 		delete j3;
// 		delete j4;
// 	}
// 	return 0;
// }

int main()
{
	IMateriaSource* src = new MateriaSource();
	AMateria *i = new Ice();
	AMateria *c = new Cure();
	AMateria* tmp1;
	AMateria* tmp2;
	src->learnMateria(i);
	src->learnMateria(c);
	ICharacter* me = new Character("me");
	tmp1 = src->createMateria("ice");
	me->equip(tmp1);
	tmp2 = src->createMateria("cure");
	me->equip(tmp2);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete tmp1;
	delete tmp2;
	delete bob;
	delete me;
	delete src;
}
