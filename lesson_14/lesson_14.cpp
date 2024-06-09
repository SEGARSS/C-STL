//stl copy | stl copy_if | ������� ������ �� ������� | ���������� ����������� �������� (stl) C++ #15 - ����� �15.
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


//----------------------------------------------------------------------------------------------------
class Person
{
public:
	Person(string name, double score, int age)
	{
		this->Name = name;
		this->Score = score;
		this->Age = age;
	}

	bool operator()(const Person &p)
	{
		return p.Score > 180;
	}

	string Name;
	double Score;
	int Age;
};
//----------------------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL,"ru");

	vector<Person> people 
	{
		Person("����",181,30),
		Person("����",30,35),
		Person("������",179,25),
		Person("�������",200,45),
		Person("������",198,18),
		Person("������",181,56),
		Person("������",135,28),
		Person("�����",150,24),
	};

	vector<Person> result;

	copy_if(people.begin(), people.end(), back_inserter(result), [](const Person &p)
	{
		return p.Age > 25;
	});

	sort(result.begin(), result.end(), [](const Person &p1, const Person &p2)
	{
			return p1.Age < p2.Age;
	});

	cout << "����� ���������:\t" << result.size() << endl;

	for (auto element : result)
	{
		cout << "���:\t" << element.Name << "\t�����\t" << element.Score << "\t�������\t" << element.Age << endl;
	}

	return 0;
}
//----------------------------------------------------------------------------------------------------
/*����� ������������� ����� � ����� ��� � ��������!*/