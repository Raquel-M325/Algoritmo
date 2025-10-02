#include <iostream>
#include <cmath>
#include <iomanip>

int equacaoa(int n){
    int a = (100 * n) + 500;
    return a;
}

int equacaob(int n){
    int expoente = 2;
    int quadrado = pow(n, expoente);
    
    int b = (2 * quadrado) + 10;
    return b;
}

int main(){
    int n;
    std::cin >> n; //já é input enviada para o programa

    int ra = equacaoa(n);
    std::cout << ra << std::endl; //o que saí no terminal

    int rb = equacaob(n);
    std::cout << rb << std::endl;
    return 0;
}