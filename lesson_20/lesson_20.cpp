// std equal predicate | Библиотека стандартных шаблонов (stl) C++ #21 - Видео 21.

#include<iostream>
#include<algorithm>
#include<vector>
#include<list>

using namespace std;

//---------------------------------------------------------------------------------
class Point
{
public:
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	int x, y;
};
//---------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL,"ru");

	vector<Point> arr
	{
		Point(1,3),
		Point(4,5),
		Point(5,7),
	};

	vector<Point> arr2
	{
		Point(1,3),
		Point(4,5),
		Point(5,7),
	};

	/*Почему именно такая запись, это связанно с тем, что в самом классе не реализованна операторы сравнения сравнения.
	  Еслиб они были бы, достаточно использовать такую запись - bool result1 = equal(begin(arr), end(arr), begin(arr2), end(arr2) );*/
	bool result = equal(begin(arr), end(arr), begin(arr2), end(arr2), [](const Point &p1, const Point &p2)
	{
		return p1.x == p2.x && p1.y == p2.y;
	});

	cout << result << endl; 

	return 0;
}
//---------------------------------------------------------------------------------
