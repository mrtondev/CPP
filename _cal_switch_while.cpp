#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int res, num_1, num_2;
char op;
string resp;
int main()
{
    setlocale(LC_ALL, "ptb");
    cout << endl;
    cout << "*** Calculadora ***" << endl;
    cout << endl;
    cout << "Digite o primeiro número" << endl;
    cin >> num_1;
    cout << endl;
    cout << "Digite o segundo número" << endl;
    cin >> num_2;
    cout << endl;
    cout << "Agora o operador matemático [ + - * /]" << endl;
    cin >> op;

    do
    {
        switch (op)
        {
        case '+':
        {
            res = num_1 + num_2;
            cout << num_1 << "+" << num_2 << "=" << res << endl;
            break;
        }
        case '-':
        {
            res = num_1 - num_2;
            cout << num_1 << "-" << num_2 << "=" << res << endl;
            break;
        }
        case '*':
        {
            res = num_1 * num_2;
            cout << num_1 << "*" << num_2 << "=" << res << endl;
            break;
        }
        case '/':
        {
            res = num_1 / num_2;
            cout << num_1 << "/" << num_2 << "=" << res << endl;
            break;
        }
        default:
        {
            cout << "Operador inválido !" << endl;
            break;
        }
        }
        cout << "Deseja fazer outro cálculo? (S ou N)?"<<endl;
        cin >> resp;

        if (resp == "s" || resp == "S")
        {
            cout << endl;
            cout << "*** Calculadora ***" << endl;
            cout << endl;
            cout << "Digite o primeiro número" << endl;
            cin >> num_1;
            cout << endl;
            cout << "Digite o segundo número" << endl;
            cin >> num_2;
            cout << endl;
            cout << "Agora o operador matemático [ + - * /]" << endl;
            cin >> op;
        }
        else if (resp == "n" || resp == "N")
        {
            cout << endl;
            cout << "Saindo da calculadora..." << endl;
            cout <<endl;
        }

    } while (resp == "s" || resp == "S");
}