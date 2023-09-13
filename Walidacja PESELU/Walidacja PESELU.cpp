#include <iostream>
#include <string>

using namespace std;

int walidacja(const string& pesel, const int waga[]);

int main()
{
    string pesel;
    cout << "Podaj numer PESEL: ";
    cin >> pesel;
    int waga[] = { 1, 3, 7, 9, 1, 3, 7, 9, 1, 3, 1 };
    int z = walidacja(pesel, waga);

    if (z % 10 == 0)
    {
        cout << "PESEL jest poprawny" << endl;
    }
    else
    {
        cout << "PESEL nie jest poprawny" << endl;
    }

    return 0;
}

int walidacja(const string& pesel, const int waga[])
{
    int suma = 0;
    for (int i = 0; i < 11; i++)
    {
        suma += ((pesel[i]) - '0') * waga[i];
    }

    return suma;
}
