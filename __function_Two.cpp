#include <iostream>
#include <locale>
using namespace std;

char mResp;
int resp;

int p_TOTAL =0;
int p_Total_Hamb =0;
int p_Total_XB =0;
int p_Total_XP =0;
int p_Total_BTT_P =0;
int p_Total_BTT_M =0;
int p_Total_BTT_G=0;
int p_Total_CC_LT =0;
int p_Total_600 =0;
int p_Total_1LT =0;
int qtd =0;
int qtd_Hamb = 0;
int qtd_XB =0;
int  qtd_XP =0;
int qtd_BTT_P =0;
int qtd_BTT_M =0;
int  qtd_BTT_G =0;
int qtd_CC_LT =0;
int qtd_CC_600 =0;
int qtd_CC_1LT=0;
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

    cout << "|-----------------------------------------------------------------------------------------------------------------------------|\n";
    cout << "| N° 100 - HAMBURGUER = R$ 5,00  | N° 200 - BATATA FRITA PEQ   = R$ 5,00        | N° 300 - COCA-COLA LATA 350 ML = R$ 4,00    |\n";
    cout << "| N° 105 - X-BURGUER  = R$ 8,00  | N° 205 - BATATA FRITA MÉD   = R$ 8,00        | N° 305 - COCA-COLA 600 ML      = R$ 8,00    |\n";
    cout << "| N° 110 - X-PICANHA  = R$ 12,00 | N° 210 - BATATA FRITA GRAND = R$ 10,00       | N° 310 - COCA-COLA 1 LT        = R$ 10,00   |\n";
    cout << "|-----------------------------------------------------------------------------------------------------------------------------|\n";

    return 1;
}


int nota(){

    cout << "************ TOTAL DE PEDIDOS ***************** \n"; 

    if (qtd_Hamb != 0){
        cout << "| N° 100 - HAMBURGUER \n          |" ;
        cout << "|                                 |" <<endl;
        cout << "| QUANTIDADE: "<< qtd_Hamb << "   |\n";
        cout << "|                                 |"<<endl;
    }
    if (qtd_XB != 0){
        cout <<"| N° 105 - X-BURGUER               |\n";
        cout <<"|                                  |"<<endl;
        cout <<"|QUANTIDADE: "<< qtd_XB << "       |\n";
        cout <<"|                                  |"<<endl;
    }
    if (qtd_XP !=0){
        cout <<"| N° 110 - X-PICANHA               |\n";
        cout <<"|                                  |"<<endl;
        cout <<"| QUANTIDADE: "<< qtd_XP << "      |\n";
        cout <<"|                                  |"<< endl;
    }
    if (qtd_BTT_P !=0){
        cout <<"| N° 200 - BATATA-FRITA PEQ        |\n";
        cout <<"|                                  |"<< endl;
        cout <<"| QUANTIDADE: "<< qtd_BTT_P << "   |\n";
        cout <<"|                                  |"<< endl;
    }
    if (qtd_BTT_M !=0){
        cout <<"| N° 205 - BATATA-FRITA MÉD        |\n";
        cout <<"|                                  |"<< endl;
        cout <<"| QUANTIDADE:"<< qtd_BTT_M << "    | \n";
        cout <<"|                                  |"<< endl;

    }
    if (qtd_BTT_G != 0){
        cout <<"| N° 210 - BATATA-FRITA GRANDE     |\n";
        cout <<"|                                  |"<< endl;
        cout <<"| QUANTIDADE : "<< qtd_BTT_G <<   "|\n";
        cout <<"|                                  |"<< endl;
    }
    if (qtd_CC_LT != 0){
        cout <<"| N° 300 - COCA-COLA LT 350 ML     |\n";
        cout <<"|                                  |"<<endl;
        cout <<"| QUANTIDADE : "<< qtd_CC_LT << "  |\n";
        cout<< "|                                  |"<< endl;
    }
    if (qtd_CC_600 != 0){
        cout <<"| N° 305 - COCA-COLA 600 ML        |\n";
        cout <<"|                                  |"<< endl;
        cout <<"| QUANTIDADE : "<< qtd_CC_600 << " |\n";
        cout <<"|"<< endl;
    }
    if (qtd_CC_1LT != 0){
        cout <<"| N° 310 - COCA-COLA 1 LT          |\n";
        cout <<"|                                  |"<<endl;
        cout <<"| QUANTIDADE : "<< qtd_CC_1LT << " |\n";
        cout <<"|                                  |"<< endl;
    }
    cout << "| TOTAL DO PEDIDO: R$ "<< p_TOTAL << "|\n";
    cout << "|/////////////////////////////////////|";
    
 return 0;
}
    


int main(){

    setlocale(LC_ALL, "ptb");

    cout << "############################### Bem-vindo ao menu de auto-atendimento ######################################################\n";
    cout << endl;
    cout << "----------------------------------Digite o Número para função : ------------------------------------------------------------\n";
    cout << endl;
    cout << " ______________________________________________________\n";
    cout << "|                                                     |\n";
    cout << "|     1 - Menu             3 - Finalizar Pedido       |\n";
    cout << "|                                                     |\n";
    cout << "|     2 - Ver carrinho                                |\n";
    cout << "|_____________________________________________________|\n";
    cout << endl;

   
 do{  
    cout << endl;
    cin >> resp;
    



    switch (resp)
    {
    case 1:{
        menu();

        break;
    }

    case 2:{
        nota();
        break;
    }

    case 3:{
        cout << "FINALIZANDO PEDIDO... \n";
        nota();
        break;
    }

    case 100:{
        cout << endl;
        cout << "N° 100 - HAMBURGUER \n";
        cout << endl;
        cout << "PREÇO = R$ 5,00 \n";
        cout << endl;
        cout <<"QUANTIDADE:  \n";
        cout << endl;
        cin >> qtd ;
        cout << endl;
        qtd_Hamb += qtd;
        p_Total_Hamb = valor_Hamb * qtd_Hamb;
        p_TOTAL += p_Total_Hamb;
        cout << "ADICIONADO :"<< qtd_Hamb << " HAMBURGUER(S)"<<endl;
        cout << endl;
        cout << "VALOR: R$ = "<< p_Total_Hamb <<"\n";
        qtd = 0;
        cout << endl;
        cout << "TOTAL DO PEDIDO R$ = "<< p_TOTAL <<endl;
        cout << endl;
        cout <<"DESEJA ADICIONAR OUTRO ITEM? (S/N) \n";
        cout << endl;
        cin >> mResp;
        cout << endl;
        if (mResp == 'S' || mResp == 's')
        {
            menu();
            break;
            
        }
        else if(mResp == 'N' || mResp == 'n'){
            resp = 3;
            nota();
            break;
            
        }
        break;
    }
    case 105:{
        cout << endl;
        cout <<"N° 105 - X-BURGER\n";
        cout << endl;
        cout <<"PREÇO = R$ 8,00 \n";
        cout << endl;
        cout << "QUANTIDADE:  \n";
        cout << endl;
        cin >> qtd;
        cout << endl;
        qtd_XB += qtd;
        p_Total_XB = valor_XB * qtd_XB;
        p_TOTAL += p_Total_XB;
        cout << "ADICIONADO :"<< qtd_XB << "X-BURGUER(S)"<<endl;
        cout << endl;
        cout << "VALOR: R$ = "<< p_Total_XB << "\n";
        qtd = 0;
        cout << endl;
        cout << "TOTAL DO PEDIDO R$ = "<< p_TOTAL <<endl;
        cout << endl;
        cout <<"DESEJA ADICIONAR OUTRO ITEM? (S/N) \n";
        cout << endl;
        cin >> mResp;
        cout << endl;
        if (mResp == 'S' || mResp == 's')
        {
            menu();
            break;
            
        }
        else if(mResp == 'N' || mResp == 'n'){
            resp = 3;
            nota();
            break;
            
        }
        break;
    }
    case 110:{
        cout << endl;
        cout << "N° 110 - X-PICANHA\n";
        cout << endl;
        cout <<"PREÇO = R$ 12,00 \n";
        cout << endl;
        cout << "QUANTIDADE: \n";
        cout << endl;
        cin >> qtd ;
        cout << endl;
        qtd_XP += qtd;
        p_Total_XP += valor_XP * qtd_XP;
        p_TOTAL += p_Total_XP;
        cout << "ADICIONADO :" << qtd_XP << "X-PICANHA(S)\n";
        cout << endl; 
        cout << "VALOR: R$: = "<< p_Total_XP <<"\n";
        qtd = 0;
        cout << endl;
        cout << "TOTAL DO PEDIDO R$ = "<< p_TOTAL <<endl;
        cout << endl;
        cout <<"DESEJA ADICIONAR OUTRO ITEM? (S/N) \n";
        cout << endl;
        cin >> mResp;
        cout << endl;
       if (mResp == 'S' || mResp == 's')
        {
            menu();
            break;
            
        }
        else if(mResp == 'N' || mResp == 'n'){
            resp = 3;
            nota();
            break;
        }
        break;
    }
    case 200:{
        cout << endl;
        cout <<"N° 200 - BATATA-FRITA PEQ\n";
        cout << endl;
        cout << "PREÇO = R$: 5,00\n";
        cout << endl;
        cout << "QUANTIDADE: \n";
        cout << endl;
        cin >> qtd;
        cout << endl;
        qtd_BTT_P += qtd;
        p_Total_BTT_P += qtd_BTT_P * valor_BTT_P;
        p_TOTAL += p_Total_BTT_P;
         cout << "ADICIONADO: "<< qtd_BTT_P << "BATATA-FRITA PEQ\n";
        cout << endl;
        cout <<  "VALOR R$ = "<< p_Total_BTT_P <<"\n";
        cout << endl;
        qtd = 0;
        cout << endl;
        cout << "TOTAL DO PEDIDO R$ = "<< p_TOTAL <<endl;
        cout << endl;
        cout <<"DESEJA ADICIONAR OUTRO ITEM? (S/N) \n";
        cout << endl;
        cin >> mResp;
        cout << endl;
       if (mResp == 'S' || mResp == 's')
        {
            menu();
            break;
            
        }
        else if(mResp == 'N' || mResp == 'n'){
            resp = 3;
            nota();
            break;
        }
        break;
    }
    case 205:{
        cout << endl;
        cout <<"N° 205 - BATATA-FRITA MED\n";
        cout << endl;
        cout <<"PREÇO = R$: 8,00\n";
        cout << endl;
        cout << "QUANTIDADE: \n";
        cout << endl;
        cin >> qtd;
        cout << endl;
        qtd_BTT_M += qtd;
        p_Total_BTT_M += qtd_BTT_M * valor_BTT_M;
        p_TOTAL += p_Total_BTT_M;
        cout << "ADICIONADO: "<< qtd_BTT_M << "BATATA-FRITA MED\n";
        cout << endl;
        cout <<  "VALOR R$ = "<< p_Total_BTT_M <<"\n";
        qtd = 0;
        cout << endl;
        cout << "TOTAL DO PEDIDO R$ = "<< p_TOTAL <<endl;
        cout << endl;
        cout <<"DESEJA ADICIONAR OUTRO ITEM? (S/N) \n";
        cout << endl;
        cin >> mResp;
        cout << endl;
        if (mResp == 'S' || mResp == 's')
        {
            menu();
            break;
            
        }
        else if(mResp == 'N' || mResp == 'n'){
            resp = 3;
            nota();
            break;
        }
        break;
    }
    case 210:{
        cout << endl;
        cout << "N° 210 - BATATA-FRITA GRANDE \n";
        cout << endl;
        cout << "PREÇO = R$: 10,00\n";
        cout << endl;
        cout << "QUANTIDADE:\n";
        cout << endl;
        cin >> qtd;
        cout << endl;
        qtd_BTT_G += qtd;
        p_Total_BTT_G += qtd_BTT_G * valor_BTT_G;
        p_TOTAL += p_Total_BTT_G;
        cout << "ADICIONADO:"<< qtd_BTT_G<<" BATATA-FRITA GRANDE\n";
        cout << endl;
        cout <<  "VALOR R$ = "<< p_Total_BTT_G <<"\n";
        qtd = 0;
        cout << endl;
        cout << "TOTAL DO PEDIDO R$ = " << p_TOTAL <<endl;
        cout << endl;
        cout <<"DESEJA ADICIONAR OUTRO ITEM? (S/N) \n";
        cout << endl;
        cin >> mResp;
        cout << endl;
        if (mResp == 'S' || mResp == 's')
        {
            menu();
            break;
            
        }
        else if(mResp == 'N' || mResp == 'n'){
            resp = 3;
            nota();
            break;
        }
        break;
    }
    case 300:{
        cout << endl;
        cout << " N° 300 - COCA-COLA LATA (350ML) \n";
        cout << endl;
        cout << "PREÇO = R$: 4,00 \n";
        cout << endl;
        cout << "QUANTIDADE : \n";
        cout << endl;
        cin >> qtd;
        cout << endl;
        qtd_CC_LT += qtd;
        p_Total_CC_LT += qtd_CC_LT * valor_CC_LT;
        p_TOTAL += p_Total_CC_LT;
        cout << "ADICIONADO : "<< qtd_CC_LT << " COCA-COLA LATA (350 ML) \n";
        cout << endl;
        cout <<  "VALOR R$ = "<< p_Total_CC_LT <<"\n";
        qtd = 0;
        cout << endl;
        cout << "TOTAL DO PEDIDO R$: = "<< p_Total_CC_LT <<endl;
        cout << endl;
        cout <<"DESEJA ADICIONAR OUTRO ITEM? (S/N) \n";
        cout << endl;
        cin >> mResp;
        cout << endl;
        if (mResp == 'S' || mResp == 's')
        {
            menu();
            break;
            
        }
        else if(mResp == 'N' || mResp == 'n'){
            resp = 3;
            nota();
            break;
        }
        break;
    }
    case 305:{
        cout << endl;
        cout <<" N° 305 - COCA-COLA (600 ML) \n";
        cout << endl;
        cout <<"PREÇO R$ = 8,00 \n";
        cout << endl;
        cout <<"QUANTDADE: \n";
        cout << endl;
        cin >> qtd;
        cout << endl;
        qtd_CC_600 += qtd;
        p_Total_600 += qtd_CC_600 * Valor_CC_600;
        p_TOTAL += p_Total_600;
        cout << "ADICIONADO : "<< qtd_CC_600 << " COCA-COLA (600ML)\n";
        cout << endl;
        cout <<  "VALOR R$ = "<< p_Total_600 <<"\n";
        qtd = 0;
        cout << endl;
        cout << "TOTAL DO PEDIDO R$: = "<< p_TOTAL <<endl;
        cout << endl;
        cout <<"DESEJA ADICIONAR OUTRO ITEM? (S/N) \n";
        cout << endl;
        cin >> mResp;
        cout << endl;
        if (mResp == 'S' || mResp == 's')
        {
            menu();
            break;
            
        }
        else if(mResp == 'N' || mResp == 'n'){
            resp = 3;
            nota();
            break;
        }
        break;
    }
    case 310:{
        cout << endl;
        cout <<"N° 310 - COCA-COLA (1 LT) \n";
        cout << endl;
        cout << "PREÇO = R$ 10,00 \n";
        cout << endl;
        cout <<" QUANTIDADE: \n";
        cout << endl;
        cin >>  qtd;
        cout << endl;
        qtd_CC_1LT += qtd;
        p_Total_1LT += qtd_CC_1LT * valor_CC_1LT;
        p_TOTAL += p_Total_1LT;
        cout << " ADICIONADO : \n"<< qtd_CC_1LT<< " COCA-COLA (1LT) \n";
        cout << endl;
        cout <<  "VALOR R$ = "<< p_Total_1LT <<"\n";
        qtd = 0;
        cout << endl;
        cout << "TOTAL DO PEDIDO R$: = "<< p_TOTAL<<endl;
        cout << endl;
        cout <<"DESEJA ADICIONAR OUTRO ITEM? (S/N) \n";
        cout << endl;
        cin >> mResp;
        cout << endl;
       if (mResp == 'S' || mResp == 's')
        {
            menu();
            break;
            
        }
        else if(mResp == 'N' || mResp == 'n'){
            resp = 3;
            nota();
            break;
        }
        break;
    }
    default:
        qtd = 0;
        cout <<"OPÇÃO INVÁLIDA, ESCOLHA UMA VÁLIDA NO MENU: \n";
        menu();
        cin >> resp;
        if (resp == 3){
            cout << "FINALIZANDO PEDIDO..." <<endl;
            nota();
            break;
        }
        else if (resp == 1){
            menu();
            break;
        }
        else if(resp == 2){
            nota();
            break;
        }
        break;
    }
 }while(resp != 3);

    return 0;

    


}