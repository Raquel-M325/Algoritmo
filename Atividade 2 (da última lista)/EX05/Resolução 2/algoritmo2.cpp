#include <iostream>
#include <cmath>

bool primo(long long n){
    long long divs = 0;
    for (long long i = 1; i <= n / 2; i++){
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
    long long n;
    std::cin >> n;

    bool p = primo(n);
    std::cout << p << std::endl;
    return 0;
}

