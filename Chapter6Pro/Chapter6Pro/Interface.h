#ifndef INTERFACE_H_
#define INTERFACE_H_

#include "Student.h"

// student number
const int N = 2;

class Interface
{
protected:
	Student stu[N];
	int num;
public:
	Interface();
	void Browse();
	void Run();
	void Input();
	void Sort();
	void Statistic();
	bool Search();
};

#endif // !INTERFACE_H_