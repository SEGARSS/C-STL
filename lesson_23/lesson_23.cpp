// Отсортировать массив в случайном порядке | random_shuffle | STL C++ #24 - Видео 24.

#include<iostream>
#include<algorithm>
#include<ctime>

using namespace std;


//-------------------------------------------------------------------------------------
class IAction
{
public:
	virtual void Action() = 0;
};
//-------------------------------------------------------------------------------------
class CatAction : public IAction
{
	virtual void Action() override
	{
		cout << "Гладим кота" << endl;
	}
};
//-------------------------------------------------------------------------------------
class TeaAction : public IAction
{
	virtual void Action() override
	{
		cout << "Пъём чай" << endl;
	}
};
//-------------------------------------------------------------------------------------
class DogAction : public IAction
{
	virtual void Action() override
	{
		cout << "Гуляем с собакой" << endl;
	}
};
//-------------------------------------------------------------------------------------
class SleepAction : public IAction
{
	virtual void Action() override
	{
		cout << "Спим" << endl;
	}
};
//-------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL,"ru");
	srand(time(NULL));
	
	//----------------------------------------------------------------------------------
	
	// Реализовать сортировку в случайном порядке к примеру можно в карточной игре или в любой другой где требуеться сделать рандом.

	cout << "Пример сортировки массива в случайном порядке." << endl << endl;

	int arr1[] = {1,2,3,4,5};
	
	for (auto el: arr1)
	{
		cout << el << " ";
	}
	cout << "Без сортировки массив:";
	cout << endl;

	random_shuffle(begin(arr1), end(arr1));

	for (auto el: arr1)
	{
		cout << el << " ";
	}
	cout << "Отсартированный в случайном порядке массив:";
	cout << endl  << endl;

	//----------------------------------------------------------------------------------

	cout << "Пример сортировки массива состоящий из классов в случайном порядке." << endl << endl;

	IAction* arr2 [] = 
	{
		new CatAction(),
		new DogAction(),
		new TeaAction(),
		new SleepAction()
	};

	for (auto &el2: arr2)
	{
		el2->Action();
	}
	cout << endl;

	cout << "Запускаем сортировку" << endl << endl;

	random_shuffle(begin(arr2), end(arr2));

	for (auto &el2: arr2)
	{
		el2->Action();
	}
	cout << endl;

	return 0;
}
//-------------------------------------------------------------------------------------