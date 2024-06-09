//stl copy | stl copy_if | Выборка данных по условию | Библиотека стандартных шаблонов (stl) C++ #15 - Видео №15.
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
		Person("Петя",181,30),
		Person("Вася",30,35),
		Person("Сергей",179,25),
		Person("Алексей",200,45),
		Person("Валера",198,18),
		Person("Кирилл",181,56),
		Person("Кирилл",135,28),
		Person("Костя",150,24),
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

	cout << "Всего элементов:\t" << result.size() << endl;

	for (auto element : result)
	{
		cout << "Имя:\t" << element.Name << "\tбыллы\t" << element.Score << "\tвозраст\t" << element.Age << endl;
	}

	return 0;
}
//----------------------------------------------------------------------------------------------------
/*Более унивирсальный поиск и вывод его в терминал!*/