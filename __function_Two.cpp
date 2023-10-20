#include <iostream>
#include <locale>
using namespace std;

char resp;

int menu(){

    cout << ("|----------------------------------------------------------------------------------------------------------------------|\n");
    cout << ("| 100 - HAMBURGUER = R$ 5,00  |  200 - BATATA FRITA PEQ   = R$ 5,00        |  300 - COCA-COLA LATA 350 ML = R$ 4,00    |\n");
    cout << ("| 105 - X-BURGUER  = R$ 8,00  |  205 - BATATA FRITA MÉD   = R$ 8,00        |  305 - COCA-COLA 600 ML      = R$ 8,00    |\n");
    cout << ("| 110 - X-PICANHA  = R$ 12,00 |  210 - BATATA FRITA GRAND = R$ 10,00       |  310 - COCA-COLA 1 LT        = R$ 10,00   |\n");
    cout << ("|----------------------------------------------------------------------------------------------------------------------|\n");

    return 1;
}

int main(){

    setlocale(LC_ALL, "ptb");

    cout << ("############################### Bem-vindo ao menu de auto-atendimento ######################################################\n");
    cout << ("\n");
    cout << ("----------------------------------Digite o Número para função : ------------------------------------------------------------\n");
    cout << ("\n");
    cout << (" ____________________________________________________\n");
    cout << ("|                                                    |\n");
    cout << ("|     0 - Menu             1 - Escolher item         |\n");
    cout << ("|                                                    |\n");
    cout << ("|     2 - Ver carrinho     3 - Finalizar Peido       |\n");
    cout << ("|____________________________________________________|\n");
    cout << ("\n");



    return 0;




}