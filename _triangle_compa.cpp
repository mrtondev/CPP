#include <iostream>
#include <locale>
using namespace std;

    int main()
    {
        setlocale(LC_ALL, "ptb");

        int ladoA, ladoB, ladoC;

        cout << "Programa de tipos de triângulo" << endl;
        cout << "Digite o primeiro lado: \n";
        cin >> ladoA;
        cout << "Digite o segundo lado: \n";
        cin >> ladoB;
        cout << "Digite o terceiro lado: \n";
        cin >> ladoC;

            if (ladoA == ladoB && ladoB == ladoC)
            {
                cout << "Triângulo é Equilátero";
            }
            else if (ladoA == ladoB && ladoA != ladoC || ladoA == ladoC && ladoB != ladoA || ladoB == ladoC && ladoA != ladoC )
            {
                cout << "Triângulo é Iśosceles";
            }
            else 
            {
                cout << "Triângulo é Escaleno";
            }
    }