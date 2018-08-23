#include "Header.h"
#include "Person.h"

class Student : virtual public Person
{
protected:
	int _course = 0;
	int _group = 0;
public:
	Student() = default;
	~Student();
	void nextCourse()
	{
		_course++;
	}
	void print()
	{
		cout << "Course : " << _course << endl << "Group : " << _group << endl;
	}
};

