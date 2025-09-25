#include <iostream>
#include <cmath>
#include <iomanip>

bool primo(int n){
    int divs = 0;

    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            divs += 1;
        }
    }
    return divs == 2;
}

int main(){
    int n; 
    std::cin >> n;

    bool p = primo(n);
   
    if (p){
        std::cout << "E primo" << std::endl;
    }

    else{
        std::cout << "Nao e primo" << std::endl;

    }
       
    return 0;
}