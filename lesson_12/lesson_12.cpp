// STL Алгоритмы сортировки | Бинарный предикат | Лямбда функции | C++ STL Уроки | #13 - Видео №13.
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<vector>
using namespace std;

//--------------------------------------------------------------------------------------------------
bool GreaterThanZero(int a)
{
	return a > 0;
}
//--------------------------------------------------------------------------------------------------
bool MyPred(int a, int b)
{
	return a > b;
}
//--------------------------------------------------------------------------------------------------
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
//--------------------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL,"ru");

	cout << "Метод сортировки вектора." << endl;

	vector<int> v = {9,32,15,6,7,2,5,4};

	sort(v.begin(), v.end(), [](int a, int b)
	{
		return a > b;
	});

	for (auto element : v)
	{
		cout << element << endl;
	}

	cout << "Метод сортировки массива." << endl;

	const int SIZE = 7;

	int arr[SIZE] = {9,32,15,6,7,2,5};

	sort(arr, arr + SIZE);

	for (auto element : arr)
	{
		cout << element << endl;
	}

	cout << "Метод сортировки вектора, по баллам студентов." << endl;

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

	sort(people.begin(), people.end(), [](Person &p1, const Person &p2)
	{
			bool result = p1.Score < p2.Score; // Если хотим сортировку по алфавиту, то прописываем (Name вместо Score).
			return result;
	});

	for (auto element : people)
	{
		cout << "Имя:\t" << element.Name << "\tбаллы\t" << element.Score << endl;
	}

	return 0;
}
//--------------------------------------------------------------------------------------------------