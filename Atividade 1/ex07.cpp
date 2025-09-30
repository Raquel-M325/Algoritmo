#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>

bool primo_operacao(int a, int b){
    bool primos = true; //tem que ser tudo minusculo
    int n = std::min(a , b); //precisa declarar std para o programa achar o código
    for (int i = 2; i <= n;i++){
        if (a % i == 0 && b % i == 0){ //&& é como and
            primos = false;
        }
    }
    return primos;
}

int main(){
    int a, b;
    std::cin >> a >> b;
    
    bool p = primo_operacao(a, b);
    std::cout << p << std::endl;

}