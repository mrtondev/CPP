#include <iostream>
using namespace std;

 int main()
{
  int sal_Min, sal;
  sal_Min = 1000;
  cout << "Digite seu salário: \n";
  cin >> sal;
    
    if (sal < sal_Min)
    {
      cout << "Você Ganha menos que um salário mínimo :(" << endl;
      cout << sal;
    }
    else
    {
      cout << "Você ganha mais do que um salário mínimo :) " << endl;
    }
}
