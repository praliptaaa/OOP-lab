WAP to store info of a student in a struct.



#include <iostream>
#include <string>

struct Student {
	std::string name;
	int age;
	int rollNumber;
	float marks;
};

int main() {
	Student student;

	std::cout << "Enter student name: ";
	std::getline(std::cin, student.name);
	std::cout << "Enter age: ";
	std::cin >> student.age;
	std::cout << "Enter roll number: ";
	std::cin >> student.rollNumber;
	std::cout << "Enter marks: ";
	std::cin >> student.marks;

	std::cout << "\nStudent Information\n"
			  << "Name: " << student.name << '\n'
			  << "Age: " << student.age << '\n'
			  << "Roll number: " << student.rollNumber << '\n'
			  << "Marks: " << student.marks << '\n';

	return 0;
}
