// STL ��������� ���������� | �������� �������� | ������ ������� | C++ STL ����� | #13 - ����� �13.
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
//bool LessThanZero(int a)
//{
//
//}
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

	cout << "����� ���������� �������." << endl;

	vector<int> v = {9,32,15,6,7,2,5,4};

	sort(v.begin(), v.end(), [](int a, int b)
	{
		return a > b;
	});

	for (auto element : v)
	{
		cout << element << endl;
	}

	cout << "����� ���������� �������." << endl;

	const int SIZE = 7;

	int arr[SIZE] = {9,32,15,6,7,2,5};

	sort(arr, arr + SIZE);

	for (auto element : arr)
	{
		cout << element << endl;
	}

	cout << "����� ���������� �������, �� ������ ���������." << endl;

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

	sort(people.begin(), people.end(), [](Person &p1, const Person &p2)
	{
			bool result = p1.Score < p2.Score; // ���� ����� ���������� �� ��������, �� ����������� (Name ������ Score).
			return result;
	});

	for (auto element : people)
	{
		cout << "���:\t" << element.Name << "\t�����\t" << element.Score << endl;
	}

	return 0;
}
//--------------------------------------------------------------------------------------------------