#include <iostream>
#include <cmath>

int mdc(int a, int b){
    int dividir = a / b;
    int resto = a % b;
    while (resto != 0){
        dividir = b / resto;
        resto = b % resto;
    }
}

int main(){
    int a, b;
    std::cin >> a >> b;
    int m = mdc(a,b);
    std:: cout << m << std::endl;
}

//tentativa