#include <iostream>
#include "Human.h"
using namespace std;

void printHuman(Human& people) {
	cout <<"Name: "<< people.getName() << endl;
	cout <<"Age: "<< people.getAge() << endl;
	cout << endl;
}

int main()
{
	Human people1;
	printHuman(people1);
	people1.setName("Dima");
	people1.setAge(99);
	printHuman(people1);
	Human people2 = { "Krim", 10 };
	Human people3 = { "Harosh" };
	Human people4 = { 5 };
	printHuman(people2);
	printHuman(people3);
	printHuman(people4);
}