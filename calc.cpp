#include <iostream>
#include <locale>
using namespace std;

int main()
    {
        setlocale(LC_ALL, "ptb");
        char mat;
        float res, Num1, Num2;

        cout << "Bem vindo à calculadora \n";
        cout << "1° Número:  \n";
        cin >> Num1;
        cout << "2° Número \n";
        cin >> Num2;
        cout << "Agora a operação (+ - * / ) \n";
        cin >> mat;

            if (mat == '+')
            {
                res = Num1+Num2;
                cout << "Resultado: " << res;
            }

            if (mat == '-')
            {
                res = Num1-Num2;
                cout << "Resultado: " << res;
            }

            if (mat == '*')
            {
                res = Num1*Num2;
                cout << "Resultado: " << res;
            }

            if (mat == '/')
            {
                res = Num1/Num2;
                cout << "Resultado: " << res;
            }

    }