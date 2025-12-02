#include <iostream>
#include <vector>

using namespace std;

vector<int> lista1;


unsigned int contar_comuns(const vector<int> &other){
    unsigned int contagem = 0;
    
    for (int i = 0; i < lista1.size(); i++){
        for (int j = 0; j < other.size(); j++){
            if (lista1[i] == other[j]){
                contagem ++;
            }

            else {
                continue;
            }
        }
    }
    return contagem;

}

int main() {
    vector<int> lista2;

    int limite;
    cout << "Digite o limite das listas: ";
    cin >> limite;

    if (limite <= 0){
        cout << "Limite inválido" << endl;
        return 0;
    }

    cout << "Digite os elementos da lista 1: ";
    for (int i = 0; i < limite; i++){
        int adiciona;
        cin >> adiciona;
        lista1.push_back(adiciona);
    }

    cout << "Digite os elementos da lista 2: ";
    for (int i = 0; i < limite; i++){
        int adiciona1;
        cin >> adiciona1;
        lista2.push_back(adiciona1);
    }

    if (lista1.size() != lista2.size()){
        cout << "Listas de tamanhos diferentes" << endl;
        return 0;
    }

    unsigned int resposta = contar_comuns(lista2);
    cout << "Número de elementos comuns: " << resposta << endl;
    return 0;

}