#include "Human.h"
#include <iostream>
using namespace std;

Human::Human() {
	age = 0;
	name = new char[14] {'S', 't', 'a', 'n', 'd', 'a', 'r', 't', ' ', 'n', 'a', 'm', 'e', '\0'};
}

Human::Human(const char* new_name, short new_age) {
	int size;
	age = new_age;
	if (new_name != nullptr) {
		size = strlen(new_name);
		name = new char[size + 1];
		for (int i = 0; i <= size; i++) {
			name[i] = new_name[i];
		}
		name[size] = '\0';
	}
	else {
		name = nullptr;
	}
}

Human::Human(const char* new_name):Human(new_name, 0) {};

Human::Human(short new_age) :Human("Standart name", new_age) {};

void Human::setName(const char* new_name) {
	int size;
	if (new_name != nullptr) {
		size = strlen(new_name);
		name = new char[size + 1];
		for (int i = 0; i <= size; i++) {
			name[i] = new_name[i];
		}
		name[size] = '\0';
	}
	else {
		name = nullptr;
	}
}

void Human::setAge(short new_age) {
	age = new_age;
}

char* Human::getName() {
	return name;
}

short Human::getAge() {
	return age;
}

Human::~Human() {
	if (name != nullptr) {
		delete[] name;
	}
}
