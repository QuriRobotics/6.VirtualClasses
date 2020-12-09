#pragma once

#include <string>
#include "vstub.h"

class Base
{
protected:
public:
	static Base* head;
	Base* next;
	std::string name = "";
	int order;


	Base(std::string name = "")
	{
		next = head;
		
		this->name = name;
		if (next == NULL) order = 0;
		else order = next->order + 1;

		head = this;
	}
	~Base()
	{
		head = next; // нормальное удаление
	}

	virtual void Print() = 0;
	//virtual void Print() // это нормально, раскомментить
	//{
	//	//printf("%d. %s\n", order, name);
	//	vc << order << ". " << name << "\n";
	//	TFlush();
	//}
	static void PrintAll()
	{
		Base* tmp = head;
		while (tmp != NULL)
		{
			tmp->Print();
			tmp = tmp->next;
			Sleep(1);
		}
	}
};