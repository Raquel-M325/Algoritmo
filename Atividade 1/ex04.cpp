#include <iostream> 
#include <cmath>
#include <iomanip>


double poste(double distancia, double rua){
    double poste = 1 + (rua / distancia);
    double arredondar = ceil(poste);
    return arredondar;

}


int main(){
    double distancia, rua;
    std::cin >> distancia >> rua;

    double p = poste(distancia, rua);
    std::cout << p << std::endl;
    return 0;
}