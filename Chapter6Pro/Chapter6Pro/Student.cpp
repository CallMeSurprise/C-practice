#include "Student.h"

Person::Person()
{
	name = NULL;
}

Person::Person(char * na, char s, int a)
{
	if (na)
	{
		name = new char[strlen(na) + 1];
		strcpy_s(name,strlen(na)+1,na);
	}
	sex = s;
	age = a;
}

Person::~Person()
{
	if (name)
	{
		delete[]name;
	}
}


Student::Student()
{
}

Student::Student(char * na, char s, int a, char * spec, char *num): Person(na,s,a)
{
	strcpy_s(speciality, strlen(spec) + 1, spec);
	strcpy_s(number, strlen(num) + 1, num);
}

Student::~Student()
{
	
}

Student & Student::operator=(Student &st)
{
	// TODO: 在此处插入 return 语句
	if (name)
	{
		delete []name;
	}
	if (st.name)
	{
		name = new char[strlen(st.name) + 1];
		strcpy_s(name, strlen(st.name) + 1, st.name);
	}
	else
	{
		name = 0;
	}
	sex = st.sex;
	age = st.age;
	strcpy_s(speciality, strlen(st.speciality) + 1, st.speciality);
	strcpy_s(number, strlen(st.number) + 1, st.number);
	return *this;
}

Student::operator char * ()
{
	return name;
}

Student::operator char ()
{
	return sex;
}

Student::operator int ()
{
	return age;
}

std::ostream & operator<<(std::ostream & out, const Student & stu)
{
	// TODO: 在此处插入 return 语句
	out << stu.name << '\t';
	out << stu.sex << '\t';
	out << stu.age << '\t';
	out << stu.speciality << "\t\t";
	out << stu.number << '\n';
	return out;
}

std::istream & operator >> (std::istream & in, Student & stu)
{
	// TODO: 在此处插入 return 语句
	char temp[80];
	std::cout << "Please enter a student infomation:\n";
	std::cout << "Name: ";				in >> temp;
	if (temp)
	{
		stu.name = new char[strlen(temp) + 1];
		strcpy_s(stu.name, strlen(temp) + 1, temp);
	}
	std::cout << "Sex: ";				in >> stu.sex;
	std::cout << "Age: ";				in >> stu.age;
	std::cout << "Speciality: ";		in >> stu.speciality;
	std::cout << "Student Number: ";	in >> stu.number;

	return in;
}
