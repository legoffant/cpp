#include <iostream>

int division(int x, int y);
double division(double x, double y);

int main(){

	std::cout << "Integer division: " << division(6,3) << std::endl;
	std::cout << "Double division: " << division(23.4, 11.6) << std::endl;
}

int division(int x, int y) {

	return x / y;
}

double division(double x, double y) {

	return x / y;
}

