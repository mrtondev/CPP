#include <iostream>
#include <locale>
using namespace std;

    int main()
        {
            setlocale(LC_ALL, "ptb");
            int numb, quad;
            cout << "Digite um número inteiro: \n";
            cin >> numb;
            quad = numb*numb;
                if (quad > 25)
                {
                    cout << "O quadrado do seu número é: " << quad << endl;
                    cout << "É maior que 25";
                }
                else
                {
                    cout << "O quadrado do seu número é: " << quad << endl;
                    cout << "É menor que 25";
                }
        }