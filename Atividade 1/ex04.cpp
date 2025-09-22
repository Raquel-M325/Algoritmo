#include <iostream>
#include <cmath>

float diametro(float pi, float raio){
    float expoente = 2;
    float quadrada = pow(raio, expoente);
    float area = pi * quadrada;
    float raiz = area / pi;
    float resposta = 2 * sqrt(raiz);
    return resposta;
}

int main(){
    float pi, raio;
    std::cin >> pi >> raio;
    float d = diametro(pi,raio);
    std::cout << d << std::endl;
    return 0;
}

