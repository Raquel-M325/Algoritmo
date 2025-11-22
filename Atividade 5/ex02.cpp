#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n; 

    int limite;
    cin >> limite;
    vector<int> lista;

    if (n <= 0) {
        cout << "Número inválido. Digite um número inteiro positivo." << endl;
        return 0;
    }

    for (int i = 0;  i < limite; i++){
        int adiciona;
        cin >> adiciona;
        lista.push_back(adiciona);
    }

    for (int i = 0; i < lista.size(); i++){
        if (lista[i] == n){
            cout << i << endl;
            return 0;
        }
    } 
    
    cout << -1 << endl; //não foi encontrado o número na lista
    return 0;
}