#include <iostream>
#include <locale>
using namespace std;

    int num, cont, res;
        int main()
        {
            setlocale(LC_ALL, "ptb");
            cont = 1;
            cout << "Deseja ver a tabuada de qual número?" << endl;
            cin >> num;
                while ( cont <= 10)
                {   
                    
                    res = num * cont;
                    cout << num << 'x' << cont << '=' << res << endl;
                    cont++;
                }
        }