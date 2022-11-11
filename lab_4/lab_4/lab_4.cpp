//Заповнення масиву десятьма словами і виведення їх в зворотньому порядку

#include <windows.h>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string words[10];

	for (int i = 0; i < 10; i++)
	{
		cout << "Введіть слово №" << i + 1 << ": ";
		cin >> words[i];
	}

	for (int i = 9; i >= 0; i--)
	{
		cout << words[i] << " ";
	}
}
