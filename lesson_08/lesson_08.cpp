//SET | MULTISET | јссоциативные контейнеры | Ѕиблиотека стандартных шаблонов (stl) | ”роки | C++ #9 - ¬идео є9.

#include<iostream>
#include<set>

using namespace std;

int main ()
{
	setlocale(LC_ALL,"ru");

	/*set упор€дычивает вывод данных. ќни выведутьс€ попор€дку. “акже set не может хранеить одинаковые данные(показывать)
	добавив ему данные 5,5,5, он выведет только одно число 5. set хранит только уникальные значени€.*/
	set<int> mySet;

	mySet.insert(5);
	mySet.insert(1);
	mySet.insert(95);
	mySet.insert(-2);
	mySet.insert(4);

	for (auto &item : mySet)
	{
		cout << item << endl;
	}

	cout << endl << "«аполним случайными числами" << endl;

	/*Ќа примере увидим, что итераци€ заполнени€ до 20, но так как ограничили генерацию до 10 случайных чисел,
	то и увидим всЄ от 0 до 9, так как уникальные значени€, повторений не будет.*/
	set<int> mySet2;

	for (int i = 0; i < 20; i++)
	{
		mySet2.insert(rand() % 10);
	}

	for (auto &item : mySet2)
	{
		cout << item << endl;
	}

	cout << endl << "»щем число" << endl;

	set<int> mySet3 {5, 65, 4, 963, 1};

	int value;
	cout << "¬ведите число которое хотите найти: ";
	cin >> value;

	if (mySet3.find(value) != mySet3.end() )
	{
		cout << "число " << value << " найдено";
	}
	else
	{
		cout << "число " << value << " отсутствует";
	}

	cout << endl << "”дал€ем число, дл€ того чтобы заменить его" << endl;

	/*set не может изменить число в бинарном своЄм дереве, но мы можем удалить его и добавить другое.*/
	set<int> mySet4 {5, 654, 9, 32, 1};

	mySet4.erase(654); // ”дал€ем 654
	mySet4.insert(653);// ƒобавл€ем
	/*ћожно ещЄ использовать метод result - который показывает, удалось нам чтото сделать или нет.
	пример
	auto result = mySet4.insert(653); - где мы увидим результат 1(true)(да, мы добавили данное число)*/

	for (auto &item : mySet4)
	{
		cout << item << endl;
	}

	cout << endl << "что такое MULTISET" << endl;

	/*multiset аналог set сразницай в том что он хранит всЄ, и одинакове данные.*/
	multiset<int> myMultiset = {0, 1, 1, 66, 654, 3, 2};

	auto it1 = myMultiset.lower_bound(1);
	auto it2 = myMultiset.upper_bound(1);

	for (auto &item : myMultiset)
	{
		cout << item << endl;
	}

	return 0;
}