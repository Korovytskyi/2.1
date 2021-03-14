#include <iostream>
#include "Triangle.h"
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Triangle a(3, 4);
	cout << a;
	++a;
	cout << a;
	--a;
	cout << a;
	a++;
	cout << a;
	a--;
	cout << a;
	cout << a.operator string();
	cout << endl;

	Triangle b;
	cin >> b;
	cout << b;
	++b;
	cout << b;
	--b;
	cout << b;
	b++;
	cout << b;
	b--;
	cout << b;
	cout << b.operator string();
	cout << endl;
	b.Cost();
	cout << endl;
	return 0;

}