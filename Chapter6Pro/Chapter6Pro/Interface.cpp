#include "Interface.h"
#include <string.h>
#include <iostream>

Interface::Interface()
{
	num = 0;
}

void Display() 
{
	std::cout << std::endl;
	std::cout << "**********0. EXIT\t**********" << std::endl;
	std::cout << "**********1. Input info\t**********" << std::endl;
	std::cout << "**********2. Search\t**********" << std::endl;
	std::cout << "**********3. Browse\t**********" << std::endl;
	std::cout << "**********4. Sort by age**********" << std::endl;
	std::cout << "**********5. Statistic\t**********" << std::endl;
}

void Interface::Run()
{
	unsigned int choice;
	do
	{
		Display();
		std::cout << "Please choose:";
		std::cin >> choice;
		if (choice<0||choice>5)
		{
			std::cout << "the num you choose must 0~5" << std::endl;
			return;
		}
		switch (choice)
		{
		case 0:break;
		case 1:
			Input();
			break;
		case 2:
			Search();
			break;
		case 3:
			Browse();
			break;
		case 4:
			Sort();
			break;
		case 5:
			Statistic();
			break;

		default:
			break;
		}
	} while (choice);
}

void Interface::Input()
{
	if (num == N) 
	{
		std::cout << "\nInfomation was FULL !\n";
		return;
	}
	int i = num;
	std::cin >> stu[i];
	num++;
}

void Interface::Browse()
{
	std::cout << "\n Information about Students that you would like to check£º\n";
	if (num == 0)
	{
		std::cout << "\n No information !\n";
		return;
	}
	else
	{
		std::cout << "Name" << "\t" << "Sex" << "\t" << "Age" << "\t" << "Speciality" << "\t" << "SNumber" << "\n";
		for (int i = 0; i < num; i++)
		{
			std::cout << stu[i];
		}
	}
}

void Interface::Sort()
{
	std::cout << "\nSorted by age!\n";
	int k = 0;
	for (int i = 0; i < num - 1; i++)
	{
		k = i;
		for (int j  = i+1; j < num; j++)
		{
			if ((int)(stu[k]) > (int)(stu[j]))
				k = j;
		}
		if (k!=i)
		{
			// Student t=stu[k]; doesnot call for operator =
			Student t;
			t = stu[k];
			stu[k] = stu[i];
			stu[i] = t;
		}
	}
}

void Interface::Statistic()
{
	int m = 0;
	std::cout << "\nStatistic by stu sex!\n";
	for (int i = 0; i < num; i++)
	{
		if (char(stu[i]) == 'M' || char(stu[i]) == 'm')
			m++;
	}
	std::cout << "\nResult! Male sut num:"<<m<<"!\n";
}

bool Interface::Search()
{
	char na[20];
	std::cout << "\nThe stu name you want to locate:\n";
	std::cin >> na;
	int i = 0;
	for ( ; i < num; i++)
	{
		if (strcmp((char*)(stu[i]), na) == 0)
			break;
	}
	
	if (i == num)
	{
		std::cout << "\nNobody!\n";
		return false;
	}
	else
	{
		std::cout << stu[i];
	}
	return true;
}
