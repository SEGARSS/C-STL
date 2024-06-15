//Поиск минимального элемента | min_element c++ | Библиотека стандартных шаблонов (stl) C++ #18 - Видео 18.

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<list>
using namespace std;

int main()
{
	setlocale(LC_ALL,"ru");

	//Находим наименьший элемент в колекциях

	const int SIZE1 = 6;
	int arr1[SIZE1] = {11,15,-3,44,75,36};
	auto result1 = min_element(arr1, arr1 + SIZE1);
	cout << *result1 << endl;

	vector<int> v1 = {10,1,-55,11,13,58};
	auto result2 = min_element(v1.begin(), v1.end());
	cout << *result2 << endl;

	list<int> lst1 = {4,7,77,-3,44,74};
	auto result3 = min_element(lst1.begin(), lst1.end());
	cout << *result3 << endl;

	cout << "Одновременно находим минимальный и максимальный элемент." << endl;

	list<int> lst2 = {4,7,77,-3,44,74};
	auto result4 = minmax_element(lst2.begin(), lst2.end());
	cout << "min:\t" << *result4.first << "\tmax:\t" << *result4.second << endl;

	vector<int> v2 = {10,1,-55,11,13,58};
	auto result5 = minmax_element(v2.begin(), v2.end());
	cout << "min:\t" << *result5.first << "\tmax:\t" << *result5.second << endl;

	const int SIZE2 = 6;
	int arr2[SIZE2] = {11,15,-3,44,75,36};
	auto result6 = minmax_element(arr2, arr2 + SIZE2);
	cout << "min:\t" << *result6.first << "\tmax:\t" << *result6.second << endl;

	return 0;
}