﻿//vector | Библиотека стандартных шаблонов (STL) | Уроки | C++ | #1 - Видео №1.

#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	setlocale(LC_ALL,"ru");

	vector<int> myVector;

	myVector.push_back(2);
	myVector.push_back(74);
	myVector.push_back(9);
	myVector.push_back(367);

	//Реализовать запись элементов в вектор можно и так - vector<int> myVector = {2, 74, 9, 367};

	//myVector[1] = 1002; //Меняем данные и помещаем в индекс 1 значение 1002 вместо 74.

	/*Метод at.
	cout << myVector.at(10) << endl;
	Что он даёт?
	Он не даст нам выйти за границы вектора. Сейчас вектор из 4 элементов, а мы хотим получить данные из 10 элемента.
	В этом случаи он всегда нам даст ошибку. А еслиб, мы бы захотели получить данные за границей вектора, вот такой записью -
	cout << myVector.[10] << endl; - могли и не получить ошибку и не увидит в чом проблема.*/

	//---------------------------------------------------------------------------------------------------------------

	cout << "Смотрим количество элементов в векторе вызывая метод myVector.size(): " << myVector.size() << endl; 

	for (int i = 0; i < myVector.size(); i++) //Показывает данные всех элементов в векторе.
	{
		cout << myVector[i] << endl;
	}

	cout << endl;

	//---------------------------------------------------------------------------------------------------------------

	myVector.pop_back();//Удаляет последний элемент в векторе.

	cout << "Удаляем последний элемент в векторе вызвав метод myVector.pop_back();: " << endl;

	cout << "Смотрим количество элементов в векторе вызывая метод myVector.size(): " << myVector.size() << endl;

	for (int i = 0; i < myVector.size(); i++) //Показывает данные всех элементов в векторе.
	{
		cout << myVector[i] << endl;
	}

	cout << endl;

	//---------------------------------------------------------------------------------------------------------------

	cout << "Очищаем все эелементы в векторе вызвав метод myVector.clear(): " << endl;

	myVector.clear(); //Очищаем вектор от всех элементов и данных.

	cout << "Смотрим количество элементов в векторе вызывая метод myVector.size(): " << myVector.size() << endl; 

	cout << endl;

	//---------------------------------------------------------------------------------------------------------------

	vector<int> myVector2 = {2, 74, 9, 367};
	myVector2.push_back(2);
	myVector2.push_back(36);
	myVector2.push_back(64);
	myVector2.push_back(985);


	cout << "Посмотрим разницу между методом myVector.size() и myVector.capasity()" << endl;

	cout << "Смотрим количество элементов в векторе вызывая метод myVector.size(): " << myVector2.size() << endl;
	cout << "Смотрим количество элементов в векторе вызывая метод myVector.capacity(): " << myVector2.capacity() << endl;

	cout << endl;

	/*По умолчанию, метод myVector2.capacity() добавляет резер элемента для ветора (в количестве 1го). 
	Это даёт возможность при добавлении	ного элемента в вектор, не пересоздавать сам вектор, 
	а просто выделить ему память под новую ячейку данных для ещё одного элемента*/

	//---------------------------------------------------------------------------------------------------------------

	cout << "Добавляем резер для capacity()" << endl;

	myVector2.reserve(100);

	cout << "Смотрим количество элементов в векторе вызывая метод myVector.size(): " << myVector2.size() << endl;
	cout << "Смотрим количество элементов в векторе вызывая метод myVector.capacity(): " << myVector2.capacity() << endl;

	cout << endl;

	/*Даёт методу myVector.capacity(): резер на 100 элементов.*/

	//---------------------------------------------------------------------------------------------------------------

	//Как с экономить память, если мы выделили резрв не 100 элементов методу myVector.capacity() а на 10 тыыс?

	myVector2.reserve(100000);

	cout << "Смотрим количество элементов в векторе вызывая метод myVector.size(): " << myVector2.size() << endl;
	cout << "Смотрим количество элементов в векторе вызывая метод myVector.capacity(): " << myVector2.capacity() << endl;
	cout << "Вызываем метод myVector2.shrink_to_fit(): " << endl;
	myVector2.shrink_to_fit();
	cout << "Смотрим количество элементов в векторе вызывая метод myVector.size(): " << myVector2.size() << endl;
	cout << "Смотрим количество элементов в векторе вызывая метод myVector.capacity(): " << myVector2.capacity() << endl;

	cout << endl;

	/*Благодаря методу myVector2.shrink_to_fit(); мы будем и выделять резер под элементы и тутже экономить память(освободили).*/

	//---------------------------------------------------------------------------------------------------------------

	/*Способ объявления вектора - vector<int> myVector3(20,50); - где первая цифра, количество элементов в векторе,
	а вторая цифра, данные которые занесуться в каждый индекс элемента. Если второе число не указать, по умолчанию
	какждый элемент в векторе будет хранить и выдавать 0.*/

	vector<int> myVector3(20,50);
	cout << "Объявляем вектор, с количеством элементов 20 и 50 делаем по умолчанию в каждом элементе данные: " << endl;
	cout << "Смотрим количество элементов в векторе вызывая метод myVector.size(): " << myVector3.size() << endl;
	cout << "Смотрим количество элементов в векторе вызывая метод myVector.capacity(): " << myVector3.capacity() << endl;

	for (int i = 0; i < myVector3.size(); i++) //Показывает данные всех элементов в векторе.
	{
		cout << myVector3[i] << endl;
	}

	cout << "Смотрим есть ли элементы в векторе вызывая метод myVector3.empty():\n где 0 - это да (элементы есть), 1 - это нет (вектор пустой) " << myVector3.empty() << endl;

	cout << endl;

	//---------------------------------------------------------------------------------------------------------------

	vector<int> myVector4;
	cout << "Смотрим количество элементов в векторе вызывая метод myVector.size(): " << myVector4.size() << endl;
	cout << "Смотрим количество элементов в векторе вызывая метод myVector.capacity(): " << myVector4.capacity() << endl;

	myVector4.resize(20,448);//Наполняем пустой вектор элементами и данными методом resize.
	cout << "Наполняем пустой вектор элементами и данными методом myVector4.resize(20,448); " << endl;
	cout << "Смотрим количество элементов в векторе вызывая метод myVector.size(): " << myVector4.size() << endl;
	cout << "Смотрим количество элементов в векторе вызывая метод myVector.capacity(): " << myVector4.capacity() << endl;

	for (int i = 0; i < myVector4.size(); i++) //Показывает данные всех элементов в векторе.
	{
		cout << myVector4[i] << endl;
	}

	cout << endl;

	//---------------------------------------------------------------------------------------------------------------
	return 0;
}