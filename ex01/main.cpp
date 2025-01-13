#include <iostream>
#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int main()
{
	try {
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	} catch (const std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
	return 0;
}