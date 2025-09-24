#include <iostream>
#include <cmath>
#include <iomanip>

//nao foi finalizado

int divisores(int n){
    int divs = 0;
    for (int i == 1; i == n + 1; i++){
        if (n / i == 0){
            divs += 1;
        }
    }
    return divs;
}


int main(){
    int n;
    std::cin >> n;   

    int d = divisores(n);
    std::cout << d << std::endl;
    return 0;
}