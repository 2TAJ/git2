#include <iostream>
using namespace std;
int main()
{
    int numerLekcji;
    cout << "Podaj numer lekcji a wypisze pozostale lekcje" << endl;
    cin >> numerLekcji;
    switch (numerLekcji)
    {
    case 1:
        cout << "Biologia,";

    case 2:
        cout << "Chemia,";

    case 3:
        cout << "Fizyka,";

    case 4:
        cout << "Matematyka,";

    case 5:
        cout << "Praktyka,";

    case 6:
        cout << "Praktyka";
        break;

    default:
        cout << "blad";
        break;
    }
    return 0;
}