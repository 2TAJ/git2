   #include <iostream>
using namespace std;
int main() {
int liczba ;
cout<<"podaj liczbę"<<endl;
cin>>liczba;
cout << "Liczba = " << liczba << endl;
string znak;
if (liczba < 0) znak = "1";
else if(liczba>=0) znak="0";
else znak="blad";
cout << "funkcja: " << znak << endl;
return 0;
}