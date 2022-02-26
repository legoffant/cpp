#include <iostream>
#include <string>

void customMessage(const std::string& mymessage);

int main(){

	std::string message = "Mon message perso";
	customMessage(message);
}
void customMessage(const std::string& mymessage){

	std::cout << "string: " << mymessage;
}

