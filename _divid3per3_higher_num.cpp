
//Receba uma sequência de 10 números inteiros e, ao final, 
//exiba a quantidade de múltiplos de 3 que foi informada.
//Receba 15 números reais e, ao final, informe o maior número da sequência.

#include <iostream>
//#include <iomanip>
using namespace std;

    int cont,num,res;
    float seq,big,cont1;

    int main()
    {
       // cout << fixed << setprecision(2);
        cout << "Digite um número inteiro, e veja uma sequência dentro de 10 números quais são múltiplos de 3"<<endl;
        cin >> num;

        for (cont=0;cont<=10;cont++){
            

            res = num%3;

            cout << num << " / 3 " << ": Resto " << res <<endl;
            num++;

                if ( res == 0)
                {
                    cout << "O número é múltiplo de 3"<<endl;
                    cout <<endl;
                }
                else 
                {
                    cout << "O número não é múltiplo de 3"<<endl;
                    cout <<endl;
                }
        }

        cout << "Digite um número real, no final da contagem , o maior número será informado."<<endl;
        cin >> seq;

        for (cont1=0;cont1<=15;cont1++)
        {
            seq ++;
            cout << cont1 << "-)" << seq << endl;
            

            if (cont1 == 15)
            {
                cout << "O número é: " << seq;
            }
        }
    }