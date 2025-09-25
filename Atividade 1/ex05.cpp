#include <iostream>
#include <cmath>
#include <iomanip>


int divisores(int n){
    int divs = 0; 
    for (int i = 1; i <= n; i++){   //ele irá contar a cada número se é divisivel, tendo o resto 0
        if (n % i == 0){            //não precisa de uma lista como python
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