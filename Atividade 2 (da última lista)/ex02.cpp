#include <iostream>
#include <cmath>
#include <iomanip>

double algorismo_a(int n){
    double expoente = 2;
    double primeiro_quadrado = pow(expoente, n); //são trocados mesmos
    double segundo_quadrado = pow(n, expoente);

    double a = ((primeiro_quadrado / segundo_quadrado) - n) + 10;
    return a;
}

int algorismo_b(int n){
   int b = 10 * n + 450;
   return b;
}

int algorismo_c(int n){
    int expoente = 2;
    int segundo_quadrado = pow(n, expoente); //n ** 2

    int c = 10 + (2 * segundo_quadrado) + n;
    return c;

}

double algorismo_d(int n){
    double d = 500 + 20 * log2(n);
    return d;
}

int main(){
    int n;
    std::cin >> n;

    std::cout << std::fixed << std::setprecision(2);

    double resposta_a = algorismo_a(n);
    std::cout << resposta_a << std::endl;

    int resposta_b = algorismo_b(n);
    std::cout << resposta_b << std::endl;

    int resposta_c = algorismo_c(n);
    std::cout << resposta_c << std::endl;

    double resposta_d = algorismo_d(n);
    std::cout << resposta_d << std::endl;

    return 0;

}

