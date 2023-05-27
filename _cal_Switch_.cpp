#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ptb");

    int numA, numB, res;
    char mat;

    cout << "--- Bem-vindo   ---" << endl;
    cout << "---     à       ---" << endl;
    cout << "--- Calculadora ---" << endl;
    cout << "\n";
    cout << "Digite o primeiro número: \n";
    cin >> numA;
    cout << "Agora o segundo número: \n";
    cin >> numB;
    cout << "Agora o operador matemático \n";
    cout << "( +  -  *  / ) \n";
    cin >> mat;

    switch (mat)
    {
    case '+':
    {
        res = numA + numB;
        cout << numA << "+" << numB << " = " << res << endl;
        break;
    }
    case '-':
    {
        res = numA - numB;
        cout << numA << "-" << numB << " = " << res << endl;
        break;
    }
    case '*':
    {
        res = numA * numB;
        cout << numA << "*" << numB << " = " << res << endl;
        break;
    }
    case '/':
    {
        res = numA / numB;
        cout << numA << " / " << numB << " =" << res << endl;
        break;
    }

    default:
        cout << "Erro! Operador inválido!" << endl;
    }
}