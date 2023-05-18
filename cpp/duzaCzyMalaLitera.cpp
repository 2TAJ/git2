#include <iostream>
using namespace std;
int main()
{
    char litera;
    int liczba;
    cout << "Podaj litere a powiem ci czy jest duza czy mala" << endl;
    cin >> litera;
    liczba = (int)litera;
    if (liczba >= 65 && liczba <= 90)
    {
        cout << "Podales duza litere" << endl;
    }
    else if (liczba >= 97 && liczba <= 122)
    {
        cout << "Podales mala litere" << endl;
    }
    else
    {
        cout << "Podales zla wartosc" << endl;
    }
    return 0;
}