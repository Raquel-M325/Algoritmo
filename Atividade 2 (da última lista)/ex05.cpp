#include <iostream>
#include <cmath>

bool primo(int n){
    int divs = 0
    for (double i = 1; n / 2; i++){
        if (n % i == 0){
            divs += 1;
        }
    }
    if (divs == 1){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    std::cin >> n;

    bool p = primo(n);
    std::cout << p << std::endl;
    return 0;
}

//não está finalizado!