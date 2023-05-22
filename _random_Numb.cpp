#include <iostream>
#include <locale>
using namespace std;

    int num;

    int main()
    {
        setlocale(LC_ALL, "ptb");
        cout << "Escreva um número qualquer:" <<endl;
        cin >> num;
            while (num != -1)
            {
                if (num%2==0)
                {
                    cout << "Esse número é par" <<endl;
                }
                else
                {
                    cout << "Esse número é ímpar" << endl;
                }
                cout << "Escreva um número qualquer:" << endl;
                cin >> num;
            }
    }