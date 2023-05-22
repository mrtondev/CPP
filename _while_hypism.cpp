#include <iostream>
#include <locale>
using namespace std;

    int age;
    char rp;
    char name[10];

    int main()
    {
        setlocale(LC_ALL, "ptb");
        cout <<" ---- Programa de categoria   ----" << endl;
        cout <<" ---- de idade para o hipismo ----" << endl;
        cout << ""<< endl;
        cout << "Primeiro informe seu nome: " << endl;
        cin >> name;
        cout << "Digite a sua idade para ver sua categoria:" << endl;
        cin >> age;

            while(age != -1 )
            {
                if(age >= 7 && age <= 12)
                {
                    cout << "Nome: " << *name << endl;
                    cout << "Categoria infantil" << endl;
                }
                else if(age >= 13 && age <= 17)
                {
                    cout << "Nome: " << name << endl;
                    cout << "Categoria Juvenil" << endl;
                }
                else if (age >= 18 && age <= 49)
                {
                    cout << "Nome: " << name << endl;
                    cout << "Categoria Adulto" << endl;
                }
                else if (age >= 50)
                {
                    cout << "Nome: " << name << endl;
                    cout << "Categoria Sênior" << endl;
                }
                else
                {
                    cout << "Erro" << endl;
                }

                    cout << "\n";
                    cout << "Se desejar finalizar o serviço, insira ( -1 ) na idade " << endl;
                    cout << "\n";
                    cout << "Primeiro informe seu nome: " << endl;
                    cin >> name;
                    cout << "Digite a sua idade para ver sua categoria:" << endl;
                    cin >> age;

            }
    }