#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int waga_1(int a, int b)
{
	int w = 0;
	w = a * b;
	return w;
}

int waga_3(int a, int b)
{
	int w = 0;
	w = a * b;
	return w;
}

int waga_7(int a, int b)
{
	int w = 0;
	w = a * b;
	return w;
}

int waga_9(int a, int b)
{
	int w = 0;
	w = a * b;
	return w;
}

int main()
{
	string pesel;
	const int table_size = 11;
	int table[table_size];
	int i;


	cout << "Podaj swój numer PESEL: ";

	getline(cin, pesel);


	for (i = 0; i < 9; i += 4)
	{
		int wartosc = 1;
		int y = pesel.c_str()[i] - '0';		
		table[i] = waga_1(y, wartosc);
		cout << table[i];
	}

	for (i = 2; i < 10; i += 4)
	{
		int wartosc = 3;
		table[i] = waga_1(pesel[i], wartosc);
		cout << table[i];
	}

}
