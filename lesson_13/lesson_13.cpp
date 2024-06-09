//STL ��������� ������ | find | find_if | find_if_not | ���������� ����������� �������� (stl) C++ #14 - ����� �14.
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


//----------------------------------------------------------------------------------------------------
class Person
{
public:
	Person(string name, double score)
	{
		this->Name = name;
		this->Score = score;
	}

	bool operator()(const Person &p)
	{
		return p.Score > 180;
	}

	string Name;
	double Score;
};
//----------------------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL,"ru");

	vector<Person> people 
	{
		Person("���� ",181),
		Person("���� ",30),
		Person("������ ",179),
		Person("������� ",200),
		Person("������ ",198),
		Person("������ ",181),
		Person("����� ",50),
		Person("����� ",150),
	};

	vector<int> v = {8,32,16,6,4,2,2,4};

	auto result = find_if(people.begin(), people.end(), [](const Person &p)
	{
			return p.Name == "�����" || p.Score == 180;
	});

	if (result == people.end())
	{
		cout << "-" << endl;
	}
	else
	{
		cout << "+" << endl;
	}

	return 0;
}
//----------------------------------------------------------------------------------------------------
/*���������� ��������� ������� ������.*/