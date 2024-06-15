//Поиск максимального элемента | max_element c++ | Библиотека стандартных шаблонов (stl) C++ #17 - Видео 17.

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<list>
using namespace std;

int main()
{
	setlocale(LC_ALL,"ru");

	//Находим максимальный элемент в колекциях

	vector<int> v = {10,1,-55,11,13,58};
	auto result1 = max_element(v.begin(), v.end());
	cout << *result1 << endl;

	list<int> lst = {4,7,77,-3,44,74};
	auto result2 = max_element(lst.begin(), lst.end());
	cout << *result2 << endl;

	const int SIZE = 6;
	int arr[SIZE] = {11,15,-3,44,75,36};
	auto result3 = max_element(arr, arr + SIZE);
	cout << *result3 << endl;

	return 0;
}