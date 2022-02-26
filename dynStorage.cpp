#include <iostream>

int main() {

	int* p = new int {123}; // Dyn stockage on the heap memory
	std::cout << "Valeur avec un stockage dynamique: " << *p << std::endl;
	delete p;
