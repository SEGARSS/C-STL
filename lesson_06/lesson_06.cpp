﻿//Контейнеры STL и операторы сравнения. | Библиотека стандартных шаблонов (stl) | Уроки | C++ | #7 - Видео №7.

#include<iostream>
#include<array>

using namespace std;

int main()
{
	setlocale(LC_ALL,"ru");

	array<int, 4> arr = {1, 94, 77, 9};

	array<int, 4> arr2 = {1, 94, 77, 9};

	bool result = (arr == arr2);

	cout << result << endl;

	return 0;
}