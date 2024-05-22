//MAP | MULTIMAP | Ассоциативные контейнеры | Библиотека стандартных шаблонов (stl) | Уроки | C++ #10 - Видео №10. 

#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
	setlocale(LC_ALL,"ru");

	pair<int, string> p(1, "телефон");

	cout << "pair - пара(связка)" << endl;
	cout << p.first << endl;
	cout << p.second << endl;
	cout << "------------------------" << endl;
	cout << "map" << endl;

	map<int, string> myMap;

	myMap.emplace(3,"монитор");//Данный метод работает быстрее, так каксоздаёт всё в момент своего написания.

	//Эти записи одинаковы
	myMap.insert(make_pair(1,"телефон"));
	myMap.insert(pair<int, string>(2, "ноутбук"));

	myMap.emplace(22,"клавиатура");

	for (const auto& pair: myMap)
		cout << pair.first << " " << pair.second << endl; 

	//Непосредственное обращение к определённому ключу
	auto it = myMap.find(22);
	cout << it->second << endl;

	//На тот случай если ведём ключ которого нет, чтоб не выбело из программы
	if (it != myMap.end())
	{
		cout << it->second << endl;
	}
	else
	{
		cout << "элемент не найден" << endl;
	}

	cout << "-------------------------" << endl;
	/*Ключ, это значение которое идёт первым. Тоесть сейчас ключи это int. 
	Но если первым будет string, то он станет ключом(ключами)*/

	map<string, int> myMap2;

	myMap2.emplace("Саша", 135);
	myMap2.emplace("Маша", 1435);
	myMap2.emplace("Наташа", 1395);

	cout << myMap2["Саша"] << endl; //Получаем значение

	myMap2["Саша"] = 99; // ПРисваиваем значение
	cout << myMap2["Саша"] << endl;

	myMap2.erase("Маша"); // Удаление ключа

	return 0;
}
/*Разница между между map и MULTIMAP, MULTIMAP - может хранить дублирующие ключи*/