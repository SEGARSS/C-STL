//stl remove | stl remove_if | stl удаление элемента по условию | Библиотека (stl) #16 - Видео 16.

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
	
	people.erase (remove_if(people.begin(), people.end(), [](const Person &p)
	{
			return p.Score < 150 && p.Age > 25;

	}), people.end());

	cout << "Всего элементов:\t" << people.size() << endl;

	for (auto element : people)
	{
		cout << "Имя:\t" << element.Name << "\tбыллы\t" << element.Score << "\tвозраст\t" << element.Age << endl;
	}

	cout << "Пример с текстом по удалению." << endl;

	string str = "Текст с несколькими   проблами";
	cout << str << endl;

	str.erase(remove(str.begin(), str.end(), ' '), str.end());
	cout << str << endl;

	return 0;
}
//----------------------------------------------------------------------------------------------------
/*Пример удаления данных с помощью stl*/