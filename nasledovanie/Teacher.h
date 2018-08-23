#include "Header.h"
#include "Person.h"

class Teacher : virtual public Person
{
protected:
	vector<string> _disciplines;
public:
	Teacher() = default;
	~Teacher();
	void addDiscipline(string discipline)
	{
		_disciplines.insert(_disciplines.end(),discipline);
	}
	void removeDiscipline()
	{
		_disciplines.pop_back();
	}
	void print()
	{
		for (size_t i = 0; i < _disciplines.size(); i++)
		{
			cout << _disciplines[i].data() << endl;
		}
	}
};

