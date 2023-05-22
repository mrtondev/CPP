 //Um instituto está realizando uma pesquisa para descobrir a idade e o 
 //peso médios da população de um bairro. Cada entrevistado informa seu 
 //peso e sua idade e, quando for informado 0 para o peso, o recebimento 
 //de dados deve ser interrompido e devem ser exibidas a quantidade de entrevistados,
 // a média de peso e a média de idade dos mesmos

 #include <iostream>
 #include <locale>
 using namespace std;
    int age,ageM,cont,weight,weightM,mediaW,mediaA;
        int main()
        {   
            weight=1;
            while ( weight !=0)
            {   
                cout << "Digite seu peso: " << endl;
                cin >> weight;
                cout << "Digite sua idade :" <<endl;
                cin >> age;
                
                    cont = cont+1;

                    switch (weight)
                    {
                        case 0:
                        break;
                    
                        default:
                        {
                            ageM=ageM+age;
                            weightM=weightM+weight;
                        }
                    }
            }
            mediaA=ageM/cont;
            mediaW=weightM/cont;

            cout << "O número de entrevistados é: " << cont << " pessoas" << endl;
            cout << "A média de idade é:" << mediaA<< " Anos"<< endl;
            cout << "A média de pesos é: " << mediaW <<" Kg"<< endl;

        }