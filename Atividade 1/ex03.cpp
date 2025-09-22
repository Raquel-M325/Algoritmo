#include <iostream>
#include <cmath>
#include <iomanip>

float area(float diametro){
    //trago a definição
    double pi = 3.14159;
    double expoente = 2;
    
    //tento encontrar o raio ao quadrado
    float raio = diametro / 2;
    double quadrado = pow(raio, expoente);
    
    //agora quero ver a area
    float resposta = quadrado * pi;
    return resposta;
    
}

int main(){
    //entrada
    float diametro;
    std::cin >> diametro;
    
    //saida
    float a = area(diametro);
    std::cout << std::fixed << std::setprecision(5) << a << std::endl;
    return 0;

}