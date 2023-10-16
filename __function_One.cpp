#include <iostream>
#include <locale>
using namespace std;


int call( int mono1, int mono2){

    int result = mono1 + mono2;

    return result;
}

int main(){

    setlocale(LC_ALL, "ptb");

    int num1 = 20;
    int num2 = 70;
    int soma = call(num1,num2);
    std::cout << "A soma é:" << soma << std::endl;
    return 0;
}