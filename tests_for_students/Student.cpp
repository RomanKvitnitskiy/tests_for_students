#include "Student.h"

Student::Student() 
{
	name = "noname";
	group = "unknow";
	course = NULL;
}
Student::Student(string a, string b, int c) : name(a), group(b), course(c) {}

void Student::setName(string name) { this->name = name; }
string Student::getName() { return name; }

void Student::setGroup(string group) { this->group = group; }
string Student::getGroup() { return group; }

void Student::setCourse(int course) { this->course = course; }
int Student::getCourse() { return course; }