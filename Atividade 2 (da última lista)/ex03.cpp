#include <iostream>
#include <cmath>

bool primo(int n){
    int divs = 0;
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            divs += 1;
        }
    }
    if (divs == 2){
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
}