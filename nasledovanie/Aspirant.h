#include "Header.h"
#include "Teacher.h"
#include "Student.h"

class Aspirant : public Student, public Teacher
{
protected:
	vector<string> _statya;
	vector<string> _conference;
public:
	Aspirant();
	~Aspirant();

	void addStat(string stat)
	{
		_statya.insert(_statya.end(), stat);
	}
	void addConf(string conf)
	{
		_conference.insert(_conference.end(), conf);

	}
	void removeStat()
	{
		_statya.pop_back();
	}
	void removeConf()
	{
		_conference.pop_back();
	}
	void print()
	{
		for (size_t i = 0; i < _statya.size(); i++)
		{
			cout << _statya[i].data() << "\t";
		}
		cout << "=============================================\n";
		for (size_t i = 0; i < _conference.size(); i++)
		{
			cout << _conference[i].data() << "\t";
		}
	}
};

