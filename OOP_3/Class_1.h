#pragma once
#include <string>
#include "Person.h"

class Class_1 
{
public:
	Class_1();
	Class_1(const std::string& name, int age);

	const std::string& getName() const;
	void setName(const std::string& name);

	int getAge() const;
	void setAge(int age);

	bool operator==(Class_1& other);

private:
	int _age;
	std::string _name;
};
