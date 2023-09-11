#include <iostream>
#include <string>

using namespace std;


int main ()
{
	string pesel; 
	cout << "Podaj numer PESEL: ";
	cin >> pesel;
	int waga[] = { 1, 3, 7, 9, 1, 3, 7, 9, 1, 3, 1};
	int suma = 0;
	if (walidacja(suma))
	{
		cout << "PESEL jest poprawny";
	}
	
	else
	{
		cout << "PESEL nie jest poprawny";
	}

	return 0;
}

int  walidacja(string pesel, int waga, int suma)
{
	suma = 0;
	for (int i = 0; i < 11; i++)
	{
		suma += ((pesel[i]) - '0') * waga[i];
	}

	return suma % 10 == 0;
}