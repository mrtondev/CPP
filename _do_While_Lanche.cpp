#include <iostream>
#include <locale>
#include <iomanip>
using namespace std;

string resp;
float val_total, val_final;
int qtd,cod_p,qH, qC, qM, qP, qCH;

int main()
{
    cout << fixed << setprecision(2);
    setlocale(LC_ALL, "ptb");
    cout << "*** Cardápio ***" << endl;
    ;
    cout << " " << endl;
    cout << "100 – Hambúrguer – R$5,50" << endl;
    cout << "" << endl;
    cout << "101 – Cachorro-quente – R$4,50" << endl;
    cout << "" << endl;
    cout << "102 – Milk-shake – R$7,00" << endl;
    cout << "" << endl;
    cout << "103 – Pizza brotinho – R$8,00" << endl;
    cout << "" << endl;
    cout << "104 — Cheeseburguer – R$8,50" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "Digite o código do produto para fazer o seu pedido" << endl;
    cout << "" << endl;
    cin >> cod_p;

    do
    {
        switch (cod_p)
        {
        case 100:
            cout << "Hambúrguer:" << endl;
            cout << "Quantidade:";
            cin >> qtd;
            qH = qtd;
            val_total = qtd * 5.50;
            cout << "Adicionado: R$ " << val_total << endl;
            break;
        case 101:
            cout << "Cachorro-quente:" << endl;
            cout << "Quantidade:";
            cin >> qtd;
            qC = qtd;
            val_total = qtd * 4.50;
            cout << "Adicionado: R$ " << val_total << endl;
            break;
        case 102:
            cout << "Milk-shake:" << endl;
            cout << "Quantidade:";
            cin >> qtd;
            qM = qtd;
            val_total = qtd * 7.00;
            cout << "Adicionado: R$ " << val_total << endl;
            break;
        case 103:
            cout << "Pizza brotinho:" << endl;
            cout << "Quantidade:";
            cin >> qtd;
            qP = qtd;
            val_total = qtd * 8;
            cout << "Adicionado: R$ " << val_total << endl;
            break;
        case 104:
            cout << "Cheeseburguer:"
                 << " R$" << endl;
            cout << "Quantidade:";
            cin >> qtd;
            qCH = qtd;
            val_total = qtd * 8.50;
            cout << "Adicionado: R$ " << val_total << endl;
            break;
        default:
            cout << "Código inválido";
            break;
        }
        (val_final += val_total);
        cout << "Total R$:" << val_final << endl;
        cout << "" << endl;
        cout << "Deseja fazer outro pedido? (S ou N)" << endl;
        cin >> resp;

        if (resp == "S" || resp == "s")
        {
            cout << "Digite o código do produto para fazer o seu pedido" << endl;
            cin >> cod_p;
        }
        else if (resp == "N" || resp == "n")
        {
            cout << "Pedido finalizado..." << endl;
        }

    } while (resp == "S" || resp == "s");

    cout << "" << endl;
    cout << "*** Total de pedido: ***";
    cout << "" << endl;
    cout << " Hambúrguer " << endl;
    cout << " Quantidade: " << qH << endl;
    cout << "" << endl;
    cout << "Cachorro-quente" << endl;
    cout << " Quantidade: " << qC << endl;
    cout << "" << endl;
    cout << " Milk shake" << endl;
    cout << " Quantidade: " << qM << endl;
    cout << "" << endl;
    cout << " Pizza Brotinho " << endl;
    cout << " Quantidade: " << qP << endl;
    cout << "" << endl;
    cout << "Chesseburger" << endl;
    cout << " Quantidade: " << qCH << endl;
    cout << "" << endl;

    cout << "" << endl;
    cout << "Total:" << endl;
    cout << "R$:" <<  val_final << endl;
}