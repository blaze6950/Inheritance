#pragma once
#include "Header.h"

class Person
{
protected:
	int _age = 0;
	char* _name = new char[50];
public:
	Person() = default;
	~Person();
	void setName(char* name)
	{
		int length = strlen(name);
		length++;
		strcpy_s(_name,length,name);
	}
	void setAge(int age)
	{
		if (age > 0)
		{
			_age = age;
		}
		else{
			return;
		}
	}
	void print()
	{
		cout << "Name : " << _name << endl << "Age : " << _age << endl;
	}
};

