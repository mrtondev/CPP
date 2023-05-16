#include <iostream>
#include <locale>
using namespace std;
    int main()
    {
        bool invalido;
        int mes;
        setlocale(LC_ALL, "ptb");
        invalido = false;
        cout << "Escreva o número de um mês  (1 a 12) \n";
        cin >> mes;
            if (mes == 1)
            {
                cout << "Mês:" << mes << " Janeiro" << endl;
            }
            else if (mes == 2)
            {
                cout << "Mês:" << mes << " Fevereiro" << endl;
            }
            else if (mes == 3)
            {
                cout << "Mês:" << mes << " Março" << endl;
            }
            else if (mes == 4)
            {
                cout << "Mês:" << mes << " Abril" << endl;
            }
            else if (mes == 5)
            {
                cout << "Mês:" << mes << " Maio" << endl;
            }
            else if (mes == 6)
            {
                cout << "Mês:" << mes << " Junho" << endl;
            }
            else if (mes == 7)
            {
                cout << "Mês:" << mes << " Julho" << endl;
            }
            else if (mes == 8)
            {
                cout << "Mês:" << mes << " Agosto" << endl;
            }
            else if (mes == 9)
            {
                cout << "Mês:" << mes << " Setembro" << endl;
            }
            else if (mes == 10)
            {
                cout << "Mês:" << mes << " Outubro" << endl;
            }
            else if (mes == 11)
            {
                cout << "Mês:" << mes << " Novembro" << endl;
            }
            else if (mes == 12)
            {
                cout << "Mês:" << mes << " Dezembro" << endl;
            }
            else 
            {
                cout << "Mês inválido";
            }

    }