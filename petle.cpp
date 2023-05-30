#include <iostream>
using namespace std;

int main()
{
    for (int j = 0; j < 20; j++)
    {

        for (int i = j; i > 10; i--)
        {
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}