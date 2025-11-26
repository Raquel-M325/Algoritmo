#include <iostream>
#include <vector>

//escolhe o elemento para tirar da lista

using namespace std; 

vector<int> removido_lista;
vector<int> lista;
vector<int> lista_removido;

bool remove(int value){
    removido_lista.clear();  // Limpa a lista de removidos antes de começar, para não acumular valores de chamadas anteriores duplicados

    for (int i = 0; i < lista.size(); i++){
        if (lista[i] == value){
            for (int j = 0; j < lista.size(); j++){
                if (lista[j] != value){
                    removido_lista.push_back(lista[j]);
                }
                else{
                    continue;
                }
            }

            lista_removido = removido_lista;
            return true;
        }
    }
    return false;
}

int main(){
    int limite;
    cin >> limite;

    if (limite <= 0){
        cout << "Limite inválido" << endl;
        return 0;
    }

    for (int i = 0; i < limite; i++){
        int adiciona;
        cin >> adiciona;
        lista.push_back(adiciona);
    }

    int value;
    cin >> value;

    bool resposta = remove(value);

    if (resposta == true){
        for (int x : lista_removido){
            cout << x << " ";
        }
    }
    else{
        for (int x : lista){
            cout << x << " ";
        }
    }

    return 0;
}
