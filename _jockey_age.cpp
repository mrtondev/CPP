#include <iostream>
#include <locale>
using namespace std;
    int main()
    {
        int age;
        setlocale(LC_ALL, "ptb");
        
        cout << "Categoria de Hipismo: \n";
        cout << "Digite sua idade: \n";
        cin >>  age;
            if ( age >= 7 && age <= 12)
            {
                cout << "Categoria infantil" <<endl;
            }
            else if ( age >= 13 && age <= 17)
            {
                cout << "Categoria Juvenil"<<endl;
            }
            else if ( age >= 18 && age <= 49)
            {
                cout << "Categoria Adulto"<<endl;
            }
            else if ( age >= 50)
            {
                cout << "Categoria Sênior"<<endl;
            }
    }