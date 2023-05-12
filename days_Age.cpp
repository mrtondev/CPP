//Receba a quantidade de dias que uma pessoa já viveu e informe quantos anos ela tem. Desconsidere
// anos bissextos.
#include <iostream>
using namespace std;
int main()
{
    int dias,anos;
    cout << "Digite quantos dias de vida você tem: " << endl;
    cin >> dias;
    anos = (dias/365);
    cout << "Você tem: " << anos << " anos";
}