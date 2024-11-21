#pragma once
class Human
{
private:
	char* name;
	short age;
public:
	Human();
	Human(const char* new_name, short new_age);
	Human(const char* new_name);
	Human(short new_age);
	void setName(const char* new_name);
	void setAge(short new_age);
	char* getName();
	short getAge();
	~Human();
};

