
#include <iostream>
#include <cmath>
#include <iomanip>

float area(float diametro) {
	//trago a definiC'C#o
	float pi = 3.14159;
	float expoente = 2;

	//tento encontrar o raio ao quadrado
	float raio = diametro / 2;
	float quadrado = pow(raio, expoente);

	//agora quero ver a area
	float resposta = quadrado * pi;
	return resposta;

}

int main() {
	//entrada
	float diametro;
	std::cin >> diametro;

	//saida
	float a = area(diametro);
	std::cout << std::fixed << std::setprecision(5) << a << std::endl;
	return 0;

}




//float - 0.78540 , double - 0.78540
//float - 78.53975 , double - 78.53975
//float - 1963493888.00000, double - 1963493750.00000
//float - 78539755552.00000 , double - 7853975000.00000
//float - 31415902208.00000, double - 31415900000.00000
//float - 1.93050, double - 1.93050
//float - 11970.69629 , double - 11970.69610
//float - 119706988052480.00000, double - 119706978009578.81250
//float - 31415900043823439872.00000, double - 3141590002792496640.00000