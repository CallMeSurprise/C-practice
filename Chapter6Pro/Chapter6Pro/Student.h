#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
#include <fstream>
#include <string.h>

class Person
{
protected:
	char *name;
	char sex;
	int age;
public:
	Person();
	Person(char *na,char s,int a);
	~Person();

};

class Student:virtual public Person
{
protected:
	char speciality[20];
	char number[16];
public:
	Student();
	Student(char *na,char s,int a,char *spec,char *num);
	~Student();
	Student & operator = (Student &);
	operator char *();
	operator char();
	operator int();
	friend std::ostream & operator <<(std::ostream &, const Student &);
	friend std::istream & operator >>(std::istream &, Student &);

};




#endif // !STUDENT_H_