#include <iostream>
#include <locale>

using namespace std;
    int main()
    {   
        setlocale(LC_ALL, "ptb");
        int cod;
        float  total,val;
        
        cout << "Por favor digite um número para um pedido \n";
        cout << "Hámburguer || Número 100  || valor: R$ 5,50 \n";
        cout << "Pizza || Número 101 || R$ 8,00 \n";
        cout << "Cachorro Quente || Número 102 || R$ 4,50 \n";
        cin >> cod;
        cout << "Agora a quantidade: \n";
        cin >> val;
            switch (cod)
            {
                case 100:
                 total = val*5.50;
                cout << "Hamburguer\n";
                cout << "Quantidade:" << val << endl;
                cout << "Valor: " << total << endl;
                break;
                case 101:
                 total = val*8.00;
                cout << "Pizza\n";
                cout << "Quantidade:" << val << endl;
                cout << "Valor: " << total << endl;
                break;
                case 102:
                 total = val*4.50;
                cout << "Cachorro Quente\n";
                cout << "Quantidade:" << val << endl;
                cout << "Valor: " << total << endl;
                break;
            }


    }