#include <iostream>
using namespace std;

int main()
{
  string plec;
  cout << "Podaj litere (K/M),a powiem ci jakiej jestes plci" << endl;
  cin >> plec; 
  if(plec == "k") cout << "jestes kobieta" << endl;
  else if(plec == "m") cout << "jestes mezczyzna"<< endl;
  else if(plec == "K") cout << "jestes kobieta" << endl;
  else if(plec == "M") cout << "jestes mezczyzna"<< endl;
  else cout<<"no gender"<<endl;
  return 0;
}