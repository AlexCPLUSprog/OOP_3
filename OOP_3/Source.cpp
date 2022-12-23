#include <iostream>
#include "Person.h"
#include "Class_1.h"

int main() {
	setlocale(LC_ALL, "ru");

	Person p1("Alex");
	Person p2("John");

	std::cout << p1.getName() << "\n";
	std::cout << p2.getName() << "\n============\n";

	// Person p3 = p1.operator+(p2);
	Person p3 = p1 + p2;

	std::cout << p3.getName() << "\n";

	// bool result = p1.operator>(p2);
	std::cout << "������ �� p1, ��� p2? ---> " << (p1 > p2) << "\n\n";

	Class_1 c1("Bob", 15);
	Class_1 c2("Robbie", 18);

	std::cout << "��� ������� ��������: " << c1.getName() << "\n";
	std::cout << "��� ������� ��������: " << c2.getName() << "\n";
	std::cout << "������� ������� ��������: " << c1.getAge() << "\n";
	std::cout << "������� ������� ��������: " << c2.getAge() << "\n";
	std::cout << "����� �� �������� " << c1.getAge() << " � " << c2.getAge() << "? ---> " << (c1 == c2) << "\n\n";

	c1.setAge(27);
	c2.setAge(27);
	std::cout << "������� ������� ��������: " << c1.getAge() << "\n";
	std::cout << "������� ������� ��������: " <<  c2.getAge() << "\n";

	std::cout << "����� �� �������� " << c1.getAge() << " � " << c2.getAge() << "? ---> " << (c1 == c2) << "\n\n";

	

}