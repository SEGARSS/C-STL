//STL алгоритмы поиска | find | find_if | find_if_not | Библиотека стандартных шаблонов (stl) C++ #14 - Видео №14.
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
		Person("Петя ",181),
		Person("Вася ",30),
		Person("Сергей ",179),
		Person("Алексей ",200),
		Person("Валера ",198),
		Person("Кирилл ",181),
		Person("Антон ",50),
		Person("Костя ",150),
	};

	vector<int> v = {8,32,16,6,4,2,2,4};

	auto result = find_if(people.begin(), people.end(), [](const Person &p)
	{
			return p.Name == "Артур" || p.Score == 180;
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
/*Реализация поисковой системы поиска.*/