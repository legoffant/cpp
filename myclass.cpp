#include <iostream>

class MyClass {

	int x;
	bool g;
	double d;

public:
	void message();
};

void MyClass::message() {

	std::cout << "Mon message ici" << std::endl;
}

int main() {

	MyClass o;
	o.message();
}

