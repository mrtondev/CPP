#include <iostream>
#include <locale>
using namespace std;

int main()
    {
        int dias,ano;
        setlocale(LC_ALL, "ptb");
        cout << "Digite a quantidade de dias que você viveu: \n";
        cin >> dias;
        ano = dias/365;
            if (ano >= 16)
            {
                cout << "Você tem  " << ano << " anos" << endl;
                cout << "Você já pode votar!";
            }
            else
            {
                cout << "Você tem  " << ano << " anos" << endl;
                cout << "Você ainda não pode votar";
            }
    }