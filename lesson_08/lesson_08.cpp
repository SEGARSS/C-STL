//SET | MULTISET | ������������� ���������� | ���������� ����������� �������� (stl) | ����� | C++ #9 - ����� �9.

#include<iostream>
#include<set>

using namespace std;

int main ()
{
	setlocale(LC_ALL,"ru");

	/*set ������������� ����� ������. ��� ���������� ���������. ����� set �� ����� �������� ���������� ������(����������)
	������� ��� ������ 5,5,5, �� ������� ������ ���� ����� 5. set ������ ������ ���������� ��������.*/
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

	cout << endl << "�������� ���������� �������" << endl;

	/*�� ������� ������, ��� �������� ���������� �� 20, �� ��� ��� ���������� ��������� �� 10 ��������� �����,
	�� � ������ �� �� 0 �� 9, ��� ��� ���������� ��������, ���������� �� �����.*/
	set<int> mySet2;

	for (int i = 0; i < 20; i++)
	{
		mySet2.insert(rand() % 10);
	}

	for (auto &item : mySet2)
	{
		cout << item << endl;
	}

	cout << endl << "���� �����" << endl;

	set<int> mySet3 {5, 65, 4, 963, 1};

	int value;
	cout << "������� ����� ������� ������ �����: ";
	cin >> value;

	if (mySet3.find(value) != mySet3.end() )
	{
		cout << "����� " << value << " �������";
	}
	else
	{
		cout << "����� " << value << " �����������";
	}

	cout << endl << "������� �����, ��� ���� ����� �������� ���" << endl;

	/*set �� ����� �������� ����� � �������� ���� ������, �� �� ����� ������� ��� � �������� ������.*/
	set<int> mySet4 {5, 654, 9, 32, 1};

	mySet4.erase(654); // ������� 654
	mySet4.insert(653);// ���������
	/*����� ��� ������������ ����� result - ������� ����������, ������� ��� ����� ������� ��� ���.
	������
	auto result = mySet4.insert(653); - ��� �� ������ ��������� 1(true)(��, �� �������� ������ �����)*/

	for (auto &item : mySet4)
	{
		cout << item << endl;
	}

	cout << endl << "��� ����� MULTISET" << endl;

	/*multiset ������ set ��������� � ��� ��� �� ������ ��, � ��������� ������.*/
	multiset<int> myMultiset = {0, 1, 1, 66, 654, 3, 2};

	auto it1 = myMultiset.lower_bound(1);
	auto it2 = myMultiset.upper_bound(1);

	for (auto &item : myMultiset)
	{
		cout << item << endl;
	}

	return 0;
}