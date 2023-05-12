//Sabendo que o dono de uma loja aplica 20% sobre o valor de compra do produto
// informe o valor sugerido para venda com base no valor de compra do produto
#include <iostream>
using namespace std;
int main()
{

    float price,percent,newPrice;
    cout << "Bem-vindo ao programa de cálculo de preços" << endl;
    cout << "Digite agora o valor pago no produto: \n" ;
    cin  >> price;
    
    percent = (price*20)/100;
    newPrice = price + percent;
    
    cout << "Preço sugerido:" << endl;
    cout << newPrice;
}