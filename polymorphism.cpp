#include <iostream>

class MyBaseClass {

public:
	virtual void dowork() {

		std::cout << "Hello from base class." << std::endl;
	}
};

class MyDerivedClass : public MyBaseClass {

public:
};

int main() {

	MyBaseClass* o = new MyDerivedClass;
	o->dowork();
	delete o;
}

