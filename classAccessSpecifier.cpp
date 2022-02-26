#include <iostream>

class MyClass {

	int x;

public:
	void setx(int myvalue){

		x = myvalue;
	}
	
	int getx(){

		return x;
	}
};

int main() {

	MyClass o;
	o.setx(123);

	std::cout <<" La valeur de x est: " << o.getx() << std::endl;
}



