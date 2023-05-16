#include <iostream>
#include <locale>
using namespace std;

int main()
    {   
       setlocale(LC_ALL, "ptb"); 
       int num,res;
       cout << "Verificação de número par (ou ímpar)" << endl;
       cout << "Digite um número \n";
       cin >> num;
          res = num%2;
          if  (res == 0 )
          {
            cout << "Seu número " << num << " é par";
          }
          else
          {
            cout << "Seu número " << num << " é impar";
          }
    }