// queue | priority queue | Адаптеры контейнеров | Библиотека стандартных шаблонов (stl) | C++ #12 - Видео №12.

#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<queue>

using namespace std;

//-------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL,"ru");

	cout << "Очередь без приоритета" << endl;

	queue<int> q;

	q.push(56);
	q.push(4);
	q.push(7);
	q.push(99);

	cout << "element count " << q.size() << endl;

	while (! q.empty() )
	{
		cout << q.front() << endl;
		q.pop();
		cout << "element count " << q.size() << endl;
	}

	cout << "==================================" << endl;
	cout << "Очередь c приоритетом" << endl;

	priority_queue<int> p;

	p.push(65);
	p.push(5);
	p.push(8);
	p.push(77);

	while (! p.empty() )
	{
		cout << p.top() << endl;
		p.pop();
		cout << "element count " << q.size() << endl;
	}

	return 0;
}
//-------------------------------------------------------------------------------------