#include "Class_1.h"



Class_1::Class_1(){
	_age = 0;
	_name = "Random name";
}


Class_1::Class_1(const std::string& name,int age) {
	_name = name;
	_age = age;
}

const std::string& Class_1::getName() const {
	return _name;
}

void Class_1::setName(const std::string& name) {
	_name = name;
}

int Class_1::getAge() const {	
	return _age;
}

void Class_1::setAge(int age) {
	_age = age;
}

/*bool Class_1::operator==(Class_1& other) {
	return _name.size() == other.getName().size();
}*/

bool Class_1::operator==(Class_1& other) {
	return _age == other.getAge();
}