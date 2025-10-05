#include <iostream>
#include <cmath>

bool primo(long long n){
    if (n == 1){
        return false;   
    }
    if (n == 2){
        return true;
    }
    if (n % 2 == 0){
        return false;
    }

    bool p = true;
    int d = 3;
    while (p && d <= n / 2){
        if (n % d == 0){
            p = false;
        }
        d += 2;
    }

    return p;
}

int main(){
    long long n;
    std::cin >> n;

    bool pri = primo(n);
    std::cout << pri << std::endl;
}

