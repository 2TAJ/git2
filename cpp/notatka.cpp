#include <iostream>
using namespace std;
int main() {
int liczba = -1;
cout << "Liczba = " << liczba << endl;
int wb = (liczba >= 0) ? liczba : -liczba;
//if (liczba >= 0) {wb=liczba;}
//else {wb=-liczba;}
cout << "Wartość bezwzględna: " << wb << endl;
return 0;
}