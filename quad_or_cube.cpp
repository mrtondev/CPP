//Exiba o quadrado e o cubo de um número qualquer informado pelo usuário

#include <iostream>
using namespace std;
int main()
{
    int num,resQ,resC;
    cout << "Digite um número: ";
    cin >> num;
    resQ=num*num;
    resC=num*num*num;
    cout << "Número informado: " << num << endl;
    cout << "Número ao quadrado: " << resQ << endl;
    cout << "Número ao cubo: " << resC << endl; 
}