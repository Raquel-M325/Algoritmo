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

    long long q_divs = 1;
    for (long long i = 3; i <= n / 2; i += 2){
        if (n % i == 0){
            q_divs += 1; 
        }
    }
    
    return q_divs == 1;
}
    
int main(){
    long long n;
    std::cin >> n;

    bool p = primo(n);
    std::cout << p << std::endl;
}