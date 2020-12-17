#pragma once
#include <iostream>
using namespace std;

class Student
{
public:
	Student();
	Student();

	void setName(string);
	string getName();


protected:
	string name;
	string group;
	int course;
};

