#include <iostream>
#include <vector>

using namespace std;

vector<int> lista1;

void push_back_vector(const vector <int> &other){
    lista1.insert(lista1.end(), other.begin(), other.end());
}

int main(){
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

    push_back_vector(lista2); // não chamei como void resposta = push_back_vector(lista2); porque a função é void, ou seja, não retorna nada, nem modificar para int que não funciona por ser diferente do método, entao é melhor só chamar direto
    cout << "Lista juntada: ";
    for (int x : lista1){
        cout << x << " ";
    }  

    cout << endl;
    return 0;
}