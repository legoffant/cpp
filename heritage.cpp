#include <iostream>
#include <string>

class Person {

	std::string name;

public:
	explicit Person(const std::string& aname) : name{ aname } {
	}

	std::string getname() const {

		return name; 
	}
};

class Student : public Person {

	int semester;

public:
	Student(const std::string& aname, int asemester) : Person::Person{ aname }, semester{ asemester } {
	}

	int getsemester() const {

		return semester;
	}
};

int main() {

	Person person{ "Constance Vik" };
	std::cout << person.getname() << std::endl;

	Student student{ "Lou Nequer", 3 };
	std::cout << student.getname() << std::endl;
	std::cout << "Semestre est: " << student.getsemester() << std::endl;
}

