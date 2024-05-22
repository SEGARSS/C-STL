//Stack | Адаптеры контейнеров | Библиотека стандартных шаблонов (stl) | Уроки | C++ #11 - Видео №11.
#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<deque>
#include<stack>

using namespace std;

int main()
{
	setlocale(LC_ALL,"ru");

	/*Основа по умолчанию стека(stack) являеться - deque. Если мы хотим использовать другую основу, мы должны её указать - 
	stack<int,list<int>>  st; Какую мы основу хоим использовать зависит от задачи, сам функцианал stack не измениться, 
	только скорость его реализации.*/
	stack<int> st;

	st.push(8);
	st.push(32);
	st.push(7);
	st.emplace(56);

	cout << "Последний элемент: " << st.top() << endl;
	cout << "Количество элементов: " << st.size() << endl;
	st.pop(); // Удаляем последний элемент:
	cout << "Удаляем последний элемент методом pop: " << endl;
	cout << "Последний элемент: " << st.top() << endl;
	cout << "Количество элементов: " << st.size() << endl;

	while (! st.empty()) // Посмотреть все элементы в стеке
	{
		cout << st.top() << endl;
		st.pop();
	}

	return 0;
}