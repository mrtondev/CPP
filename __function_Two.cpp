#include <iostream>
#include <locale>
using namespace std;

char resp;

int p_TOTAL ,p_Total_Hamb, p_Total_XB, p_Total_XP , p_Total_BTT_P, p_Total_BTT_M, p_Total_BTT_G, p_Total_CC_LT , p_Total_600, p_Total_1LT;
int qtd, qtd_Hamb, qtd_XB, qtd_XP , qtd_BTT_P , qtd_BTT_M, qtd_BTT_G , qtd_CC_LT , qtd_CC_600 , qtd_CC_1LT;
int valor_Hamb = 5.00; 
int valor_XB = 8.00; 
int valor_XP = 12.00;
int valor_BTT_P = 5.00 ;
int valor_BTT_M = 8.00;
int valor_BTT_G = 10.00;
int valor_CC_LT = 4.00;
int Valor_CC_600 = 8.00; 
int valor_CC_1LT = 10.00;

int menu(){

    cout << ("|-----------------------------------------------------------------------------------------------------------------------------|\n");
    cout << ("| N° 100 - HAMBURGUER = R$ 5,00  | N° 200 - BATATA FRITA PEQ   = R$ 5,00        | N° 300 - COCA-COLA LATA 350 ML = R$ 4,00    |\n");
    cout << ("| N° 105 - X-BURGUER  = R$ 8,00  | N° 205 - BATATA FRITA MÉD   = R$ 8,00        | N° 305 - COCA-COLA 600 ML      = R$ 8,00    |\n");
    cout << ("| N° 110 - X-PICANHA  = R$ 12,00 | N° 210 - BATATA FRITA GRAND = R$ 10,00       | N° 310 - COCA-COLA 1 LT        = R$ 10,00   |\n");
    cout << ("|-----------------------------------------------------------------------------------------------------------------------------|\n");

    return 1;
}

int main(){

    setlocale(LC_ALL, "ptb");

    cout << ("############################### Bem-vindo ao menu de auto-atendimento ######################################################\n");
    cout << ("\n");
    cout << ("----------------------------------Digite o Número para função : ------------------------------------------------------------\n");
    cout << ("\n");
    cout << (" ______________________________________________________\n");
    cout << ("|                                                     |\n");
    cout << ("|     1 - Menu             2 - Escolher item          |\n");
    cout << ("|                                                     |\n");
    cout << ("|     2 - Ver carrinho     3 - Finalizar Pedido       |\n");
    cout << ("|_____________________________________________________|\n");
    cout << ("\n");

    cin >> resp;

    switch (resp)
    {
    case 1:{
        cout << (menu());
    
        break;
    }
    case 100:{
        cout << ("N° 100 - HAMBURGUER \n");
        cout << ("VALOR = R$ 5,00");
        cout <<("QUANTIDADE:  \n");
        cin >> qtd ;
        qtd_Hamb += qtd;
        p_Total_Hamb = valor_Hamb * qtd_Hamb;
        p_TOTAL += p_Total_Hamb;
        cout << ("ADICIONADO :", qtd_Hamb , " HAMBURGUER(S)");
        cout << ("VALOR: R$ = ", p_Total_Hamb,"\n");
        qtd = 0;
        cout << ("TOTAL DO PEDIDO R$ = ", p_TOTAL ,"\n");
    }
    case 105:{
        cout <<("N° 105 - X-BURGER\n");
        cout <<("VALOR = R$ 8,00");
        cout << ("QUANTIDADE:  \n");
        cin >> qtd;
        qtd_XB += qtd;
        p_Total_XB = valor_XB * qtd_XB;
        p_TOTAL += p_Total_XB;
        cout << ("ADICIONADO :", qtd_XB , "X-BURGUER(S)");
        cout << ("Valor: R$ = ", p_Total_XB, "\n");
        qtd = 0;
        cout <<( "TOTAL DO PEDIDO R$ = ",p_TOTAL , "\n");
    }
    case 110:{
        cout << ("N° 110 - X-PICANHA\n");
        cout <<("VALOR = R$ 12,00 \n");
        cout << ("QUANTIDADE: \n");
        cin >> qtd ;
        qtd_XP += qtd;
        cout << ("ADICIONADO :" , qtd_XP , "X-PICANHA(S)"); 
    }
    case 200:{
        cout <<("N° 200 - BATATA-FRITA PEQ\n");
        cout << ("QUANTIDADE: \n");
        cin >> qtd;
        qtd_BTT_P += qtd;
        
        cout << ("ADICIONADO: ", qtd_BTT_P , "BATATA-FRITA PEQ");
        qtd = 0;
    }
    case 205:{
        cout <<("N° 200 - BATATA-FRITA MED\n");
        cout << ("QUANTIDADE: \n");
        cin >> qtd;
        qtd_BTT_M += qtd;
        cout << ("ADICIONADO: ", qtd_BTT_M , "BATATA-FRITA MED");
        qtd = 0;
    }
    default:
        qtd = 0;
        break;
    }

    return 0;

    


}