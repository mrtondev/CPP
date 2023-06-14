#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

float val_Ped, val_Total;
int qtd, qH, qB, qX, qXT, qG, qXP, qHT , qC , qBC , qA ,cod_Ped;
string loop;

int main()
{
    setlocale(LC_ALL, "ptb");
    cout << fixed << setprecision(2);
    // Boot
    cout << "---------- Inciando programa... ----------" << endl;
    cout << endl;
    cout << endl;
    // Introdução ao cardápio
    cout << "|------------------------------- Cardápio -------------------------------------------------|" << endl;
    cout << "|                                                                                          |" << endl;
    cout << "|N°: 1           | N°: 2           | N°: 3          | N°: 4              | N°:5            |" << endl;
    cout << "|Nome:Hamburguer | Nome: X-Burguer | Nome: X-tudo   | Nome: Batata-Frita | Nome: Guaravita |" << endl;
    cout << "|Valor: R$ 4,00  | Valor: R$ 5,00  | Valor: R$ 8,00 | Valor: R$ 2,00     | Valor: R$ 2,00  |" << endl;
    cout << "|                                                                                          |" << endl;
    cout << "|------------------------------------------------------------------------------------------|" << endl;
    cout << "|N°: 6           | N°: 7           | N°: 8          | N°: 9              | N°:10           |" << endl;
    cout << "|Nome:X-Picanha  | Nome: Hot-Dog   | Nome: Coca2 lts| Nome: Batata-Bacon | Nome: Açai 700ml|" << endl;
    cout << "|Valor: R$ 15,00 | Valor: R$ 9,00  | Valor: R$ 12,00| Valor: R$ 5,00     | Valor: R$ 17,00 |" << endl;
    cout << "|                                                                                          |" << endl;
    cout << "|------------------------------------------------------------------------------------------|" << endl;
    cout << endl;
    cout << endl;
    cout << "Digite o NÚMERO do pedido: " << endl;
    cin >> cod_Ped;
    do
    {
        switch (cod_Ped)
        {
        case 1:
            cout << endl;
            cout << "Hamburguer" << endl;
            cout << endl;
            cout << "R$ 4,00 Unidade" << endl;
            cout << endl;
            cout << "Quantidade?" << endl;
            cout << endl;
            cin >> qtd;
            qH += qtd;
            val_Ped = qtd * 4.00;
            cout << endl;
            cout << " Adicionado: R$ " << val_Ped << endl;
            break;

        case 2:
            cout << endl;
            cout << "X-burguer" << endl;
            cout << endl;
            cout << "R$ 5,00 Unidade" << endl;
            cout << endl;
            cout << "Quantidade?" << endl;
            cout << endl;
            cin >> qtd;
            qX += qtd;
            val_Ped = qtd * 5.00;
            cout << endl;
            cout << " Adicionado: R$ " << val_Ped << endl;
            break;

        case 3:
            cout << endl;
            cout << "X-Tudo" << endl;
            cout << endl;
            cout << "R$ 8,00 Unidade" << endl;
            cout << endl;
            cout << "Quantidade?" << endl;
            cout << endl;
            cin >> qtd;
            qXT += qtd;
            val_Ped = qtd * 8.00;
            cout << endl;
            cout << " Adicionado: R$ " << val_Ped << endl;
            break;

        case 4:
            cout << endl;
            cout << "Batata-Frita" << endl;
            cout << endl;
            cout << "R$ 2,00 Unidade" << endl;
            cout << endl;
            cout << "Quantidade?" << endl;
            cout << endl;
            cin >> qtd;
            qB += qtd;
            val_Ped = qtd * 2.00;
            cout << endl;
            cout << " Adicionado: R$ " << val_Ped << endl;
            break;

        case 5:
            cout << endl;
            cout << "Guaravita" << endl;
            cout << endl;
            cout << "R$ 2,00 Unidade" << endl;
            cout << endl;
            cout << "Quantidade?" << endl;
            cout << endl;
            cin >> qtd;
            qG += qtd;
            val_Ped = qtd * 2.00;
            cout << endl;
            cout << " Adicionado: R$ " << val_Ped << endl;
            break;
        
        case 6:
            cout << endl;
            cout << "X-Picanha" << endl;
            cout << endl;
            cout << "R$ 15,00 Unidade" << endl;
            cout << endl;
            cout << "Quantidade?" << endl;
            cout << endl;
            cin >> qtd;
            qXP += qtd;
            val_Ped = qtd * 15.00;
            cout << endl;
            cout << " Adicionado: R$ " << val_Ped << endl;
            break;
        case 7:
            cout << endl;
            cout << "Hot-Dog" << endl;
            cout << endl;
            cout << "R$ 7,00 Unidade" << endl;
            cout << endl;
            cout << "Quantidade?" << endl;
            cout << endl;
            cin >> qtd;
            qHT += qtd;
            val_Ped = qtd * 7.00;
            cout << endl;
            cout << " Adicionado: R$ " << val_Ped << endl;
            break;
        case 8:
            cout << endl;
            cout << "Coca-Cola 2 lts" << endl;
            cout << endl;
            cout << "R$ 12,00 Unidade" << endl;
            cout << endl;
            cout << "Quantidade?" << endl;
            cout << endl;
            cin >> qtd;
            qC += qtd;
            val_Ped = qtd * 12.00;
            cout << endl;
            cout << " Adicionado: R$ " << val_Ped << endl;
            break;
        case 9:
            cout << endl;
            cout << "Batata C/ Bacon" << endl;
            cout << endl;
            cout << "R$ 5,00 Unidade" << endl;
            cout << endl;
            cout << "Quantidade?" << endl;
            cout << endl;
            cin >> qtd;
            qBC += qtd;
            val_Ped = qtd * 5.00;
            cout << endl;
            cout << " Adicionado: R$ " << val_Ped << endl;
            break;
        case 10:
            cout << endl;
            cout << "Açai de 700ml" << endl;
            cout << endl;
            cout << "R$ 17,00 Unidade" << endl;
            cout << endl;
            cout << "Quantidade?" << endl;
            cout << endl;
            cin >> qtd;
            qA += qtd;
            val_Ped = qtd * 17.00;
            cout << endl;
            cout << " Adicionado: R$ " << val_Ped << endl;
            break;

        default:
            cout << "Erro Não Encontrado" << endl;
            cout << "---------- 404 -----------" << endl;
            val_Ped += 0;
            cout << endl;
            cout << "|------------------------------- Cardápio -------------------------------------------------|" << endl;
            cout << "|                                                                                          |" << endl;
            cout << "|N°: 1           | N°: 2           | N°: 3          | N°: 4              | N°:5            |" << endl;
            cout << "|Nome:Hamburguer | Nome: X-Burguer | Nome: X-tudo   | Nome: Batata-Frita | Nome: Guaravita |" << endl;
            cout << "|Valor: R$ 4,00  | Valor: R$ 5,00  | Valor: R$ 8,00 | Valor: R$ 2,00     | Valor: R$ 2,00  |" << endl;
            cout << "|                                                                                          |" << endl;
            cout << "|------------------------------------------------------------------------------------------|" << endl;
            cout << "|N°: 6           | N°: 7           | N°: 8          | N°: 9              | N°:10           |" << endl;
            cout << "|Nome:X-Picanha  | Nome: Hot-Dog   | Nome: Coca2 lts| Nome: Batata-Bacon | Nome: Açai 700ml|" << endl;
            cout << "|Valor: R$ 15,00 | Valor: R$ 9,00  | Valor: R$ 12,00| Valor: R$ 5,00     | Valor: R$ 17,00 |" << endl;
            cout << "|                                                                                          |" << endl;
            cout << "|------------------------------------------------------------------------------------------|" << endl;
            cout<<endl;
            cout<< endl;
            cout << "Digite o número para escolher seu item ...." << endl;
            cin >> cod_Ped;
            break;
        }
        // soma de valores //
        val_Total += val_Ped;
        cout << "Valor do Total: R$ " << val_Total << endl;
        cout << endl;
        // Loop //
        cout << "Deseja adicionar mais algum item no seu pedido? " << endl;
        cout << "(S para sim)  (N para não)" << endl;
        cin >> loop;

        if (loop == "S" || loop == "s")
        {
            cout << endl;
            cout << "|------------------------------- Cardápio -------------------------------------------------|" << endl;
            cout << "|                                                                                          |" << endl;
            cout << "|N°: 1           | N°: 2           | N°: 3          | N°: 4              | N°:5            |" << endl;
            cout << "|Nome:Hamburguer | Nome: X-Burguer | Nome: X-tudo   | Nome: Batata-Frita | Nome: Guaravita |" << endl;
            cout << "|Valor: R$ 4,00  | Valor: R$ 5,00  | Valor: R$ 8,00 | Valor: R$ 2,00     | Valor: R$ 2,00  |" << endl;
            cout << "|                                                                                          |" << endl;
            cout << "|------------------------------------------------------------------------------------------|" << endl;
            cout << "|N°: 6           | N°: 7           | N°: 8          | N°: 9              | N°:10           |" << endl;
            cout << "|Nome:X-Picanha  | Nome: Hot-Dog   | Nome: Coca2 lts| Nome: Batata-Bacon | Nome: Açai 700ml|" << endl;
            cout << "|Valor: R$ 15,00 | Valor: R$ 9,00  | Valor: R$ 12,00| Valor: R$ 5,00     | Valor: R$ 17,00 |" << endl;
            cout << "|                                                                                          |" << endl;
            cout << "|------------------------------------------------------------------------------------------|" << endl;
            cout<<endl;
            cout<< endl;
            cout << "Digite o número para escolher seu item ...." << endl;
            cin >> cod_Ped;
        }
        else if (loop == "N" || loop == "n")
        {
            cout << endl;
            cout << "Finalizando pedido... " << endl;
            cout << endl;
        }
        else{
            cout << "Deseja adicionar mais algum item no seu pedido? " << endl;
            cout << "(S para sim)  (N para não)" << endl;
        cin >> loop;

        }

    } while (loop == "S" || loop == "s");
    // Total e quantidade de pedido
    cout << endl;
    cout << " ********** Total do pedido **********" << endl;
    cout << endl;

    cout << "|                   " << endl;
    if (qH != 0)
    {
        cout << "|                   " << endl;
        cout << "| Hamburguer        " << endl;
        cout << "| Quantidade:   " << qH   << " " << endl;
        cout << "|                   " << endl;
    }
    else
    {
    }
    if (qX != 0)
    {
        cout << "| X-Burguer         " << endl;
        cout << "| Quantidade:   " << qX << "  " << endl;
        cout << "|                   " << endl;
    }
    else
    {
    }
    if (qXT != 0)
    {
        cout << "| X-Tudo            " << endl;
        cout << "| Quantidade:   " << qXT << "   " << endl;
        cout << "|                   " << endl;
    }
    else
    {
    }
    if (qB != 0)
    {
        cout << "| Batata-Frita      " << endl;
        cout << "| Quantidade:   " << qB << "   " << endl;
        cout << "|                   " << endl;
    }
    else
    {
    }
    if (qG != 0)
    {
        cout << "| Guaravita         " << endl;
        cout << "| Quantidade:   " << qG << "    " << endl;

    }
    else
    {
    }
    if (qXP != 0)
    {
        cout << "|                   " << endl;
        cout << "| X-Picanha         " << endl;
        cout << "| Quantidade:   " << qXP << "     " << endl;
        cout << "|                   " << endl;
    }
    else
    {
    }
    if (qHT != 0)
    {
        cout << "|                   " << endl;
        cout << "| Hot-Dog           " << endl;
        cout << "| Quantidade:   " << qHT << "  " << endl;
        cout << "|                   " << endl;
    }
    else
    {
    }
    if (qC != 0)
    {
        cout << "|                  " << endl;
        cout << "| Coca 2 lts        " << endl;
        cout << "| Quantidade:   " << qC << "    " << endl;
        cout << "|                   " << endl;
    }
    else
    {
    }
    if (qBC != 0)
    {
        cout << "|                   " << endl;
        cout << "| Batata C/ Bacon   " << endl;
        cout << "| Quantidade:   " << qBC << "   " << endl;
        cout << "|                   " << endl;
    }
    else
    {
    }
    if (qA != 0)
    {
        cout << "|                   " << endl;
        cout << "| Açai 700ml        " << endl;
        cout << "| Quantidade:   " << qA << "  " << endl;
        cout << "|                   " << endl;
    }
    else
    {
    }

    cout << "|                   " << endl;
    cout << endl;
    cout << "Total R$: " << val_Total << endl;
    cout << endl;
}
