// STL equal и mismatch | Сравнение массивов | Библиотека стандартных шаблонов (stl) C++ #20 - Видео 20.

#include<iostream>
#include<algorithm>
#include<vector>
#include<list>

using namespace std;

int main()
{
	setlocale(LC_ALL,"ru");

	//-----------------------------------------------------------------------------
	
	// Пример как сравнивать колекции.
	cout << "Сравнение массивов." << endl;

	int arr[] = {10,3,4,5,7,11};

	int arr2[] = {10,3,4,5,7,11};

	bool result1 = equal(begin(arr), end(arr), begin(arr2), end(arr2) );

	cout << result1 << endl; // На выходе - (0), т.к. колекции равны.

	//-----------------------------------------------------------------------------

	cout << "Сравнение векторов." << endl;

	vector<int> varr = {10,3,4,5,7,11};

	vector<int> varr2 = {10,3,4,5,7,11};

	bool result2 = equal(begin(varr), end(varr), begin(varr2), end(varr2) );

	cout << result2 << endl;

	/*Поменям вектор на лист (но у них одинаковые данные будут) ответ будет также 1. Это не влияет (только данные)*/

	//-----------------------------------------------------------------------------

	cout << "Сравнение колекции, где количество индексов элементов одинаковы, но в разном порядке." << endl;

	vector<int> vmarr = {11,7,4,5,3,10};

	vector<int> vmarr2 = {10,3,4,5,7,11};

	//Добавляем сортировку, чтобы коректо сравнить колекции. (Без неё, ответ будет (0), что колекции не совпадают.
	sort(begin(vmarr), end(vmarr) );
	sort(begin(vmarr2), end(vmarr2) );

	bool result3 = equal(begin(vmarr), end(vmarr), begin(vmarr2), end(vmarr2) );

	cout << result3 << endl;

	//-----------------------------------------------------------------------------

	cout << "Сравнение колекции, с помощью mismatch." << endl;

	vector<int> vmiarr = {11,3,4,5,7,10};

	vector<int> vmiarr2 = {1,3,4,5,7,10};

	auto result4 = mismatch(begin(vmiarr), end(vmiarr), begin(vmiarr2), end(vmiarr2) );

	if (result4.first == end(vmiarr) && result4.second == end(vmiarr2) )
		cout << "+" << endl; // Колекции равны
	else
		cout << "-" << endl; // Колекции не равны

	//-----------------------------------------------------------------------------

	return 0;
}