#include <iostream>
#include <cmath>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    int lista[] = {10, 15, 3, 7}; //de uma lista p
    int lista_size = sizeof(lista) / sizeof(lista[0]); //é len de uma lista em C++
    bool resposta = false;

    for (int i = 0; i < lista_size; i++){
        for (int j = i + 1; j < lista_size; j++){
            int soma = lista[i] + lista[j];
            if (soma == n){
                resposta = true;
                break;
            }
        
        if (resposta){ //porque está ainda dentro de outra lista
            break;
        }
        }
    }

    if (resposta){
       std::cout << "Par achado" << std::endl; //se for true
    }
    else{
        std::cout << "Par não achado" << std::endl;  //se for falso
    }
    
    return 0;
}
