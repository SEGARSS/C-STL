﻿// accumulate c++ | сумма и произведение элементов массива | Библиотека (stl) C++ #19 - Видео 19.

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;


//------------------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL,"ru");

	//-----------------------------------------------------------------------------------------------------------
	vector<int> v = {2,3,4};

	//Находим сумму всех чисел вектора.
	auto result1 = accumulate(v.begin(), v.end(), 0);/*Указываем (0), куда он будет ложить и складывать числа. 
	                                                  Укажим 1, начнёт прибавлять к ней числа.*/
	cout << "RESULT-1\t" << result1 << endl;

	cout << "Пример с массивом, плюс другой синтекс написания но резульат тотже." << endl;

	//-----------------------------------------------------------------------------------------------------------
	int m [] = {3,6,4};

	auto result2 = accumulate(begin(m), end(m), 0); // Вместо v.begin() - begin(m).

	cout << "RESULT-2\t" << result2 << endl;

	//-----------------------------------------------------------------------------------------------------------

	cout << "Пример произведения чисел." << endl;

	int p [] = {7,2,4};

	//Добавили в алгоритм 4й параметр, где создали ананимную лямду которая умножит все данные и заменили (0) на 1 (чтоб ответ был не 0).
	auto result3 = accumulate(begin(p), end(p), 1, [](int a, int b)
	{
		return a * b;
	}); 

	cout << "RESULT-3\t" << result3 << endl;

	//-----------------------------------------------------------------------------------------------------------

	cout << "Пример сложения чётных чисел." << endl;

	int h [] = {9,7,2,4,8};

	auto result4 = accumulate(begin(h), end(h), 0, [](int a, int b)
	{
		if (b % 2 == 0)
			return a + b;
		else
			return a;
	}); 

	cout << "RESULT-4\t" << result4 << endl;

	//-----------------------------------------------------------------------------------------------------------

	cout << "Пример сложения чётных чисел." << endl;

	int s [] = {9,7,2,4,8};

	/*Вывод у нас 9-7-2-4-8. Указали первый параметр next(begin(s)) а не begin(s) - Почему?
	  Если не указать что начала ион преобразовать не с 0 индекса а с 1го, то резульатат будет - 9-9-7-2-4-8 (Лишняя 9).*/
	string result5 = accumulate(next(begin(s)), end(s), to_string(s[0]), [](string a, int b)
	{
		return a + "-" + to_string(b);
	}); 

	cout << "RESULT-5\t" << result5 << endl;

	return 0;
}
//------------------------------------------------------------------------------------------------