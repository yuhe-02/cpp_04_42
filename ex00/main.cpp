#include "includes/ClapTrap.hpp"
#include <iostream>

int main() {
	ClapTrap ct("test");
	ClapTrap df(ct);
	unsigned int test = 4294967295;
	std::cout << test << std::endl;
	df.beRepaired(4294967295);
	// ct.attack("target");
	// for (int i = 0; i < 5; i++) {
	// 	df.beRepaired(1);
	// }
	// for (int i = 0; i < 15; i++) {
	// 	df.attack();
	// }
	// for (int i = 0; i < 15; i++) {
	// 	df.takeDamage(1);
	// }
	// for (int i = 0; i < 5; i++) {
	// 	df.beRepaired(1);
	// }
	return (0);
}