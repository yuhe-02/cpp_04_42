#include <iostream>
#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int main()
{
	try {
		{
			std::cout << "----normal test----" << std::endl;
			const Animal* j = new Dog();
			const Animal* i = new Cat();
			delete j;
			delete i;
		}
		{
			std::cout << "-------------------" << std::endl;
			std::cout << "----deep copy test(cat copy constructor)----" << std::endl;
			Cat cat;
			Cat cat2(cat);
			cat.randomSet();
			cat.showBrain();
			cat2.showBrain();
		}
		{
			std::cout << "-------------------" << std::endl;
			std::cout << "----deep copy test(cat copy assginment)----" << std::endl;
			Cat cat;
			Cat cat2;
			cat2 = cat;
			cat.randomSet();
			cat.showBrain();
			cat2.showBrain();
		}
		{
			std::cout << "-------------------" << std::endl;
			std::cout << "----deep copy test(dog copy constructor)----" << std::endl;
			Dog dog;
			Dog dog2(dog);
			dog.randomSet();
			dog.showBrain();
			dog2.showBrain();
		}
		{
			std::cout << "-------------------" << std::endl;
			std::cout << "----deep copy test(dog copy assignment)----" << std::endl;
			Dog dog;
			Dog dog2;
			dog2 = dog;
			dog.randomSet();
			dog.showBrain();
			dog2.showBrain();

		}
	} catch (const std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
	return 0;
}

// case 2
// int main() {
// 	{
// 		std::cout << "----normal test----" << std::endl;
// 		const Animal* j = new Animal();
// 		const Animal* i = new Animal();
// 		std::cout << "Animal Type: " << j->getType() << " " << std::endl;
// 		j->makeSound();
// 		std::cout << "Animal Type: " << i->getType() << " " << std::endl;
// 		delete j;
// 		delete i;
// 	}
// }