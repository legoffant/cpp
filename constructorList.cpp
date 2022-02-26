#include <iostream>

class MyClass {

	int x;
	double d;

public:
	MyClass(int xx, double dd);
	void printdata();
};

// Creation du constructeur, initialisation liste
MyClass::MyClass(int xx, double dd) : x{xx}, d{dd} {
}

void MyClass::printdata() {

	std::cout << "Afficher des datas, valeur de x: "<< x << "valeur de d: " << d << std::endl;
}

int main() {

	MyClass o{ 123, 26.98};
	o.printdata();
}

