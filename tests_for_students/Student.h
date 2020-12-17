#pragma once
#include <iostream>
using namespace std;

class Student
{
public:
	Student();
	Student(string, string, int);

	void setName(string);
	string getName();

	void setGroup(string);
	string getGroup();

	void setCourse(int);
	int getCourse();
protected:
	string name; 
	string group;
	int course;
};

