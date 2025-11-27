#include <iostream>
#include <vector>

//escolhe o elemento para tirar da lista, mas nao esta tao atualizado quanto o ex03.2.cpp

using namespace std; 

vector<int> removido_lista;
vector<int> lista;
vector<int> lista_removido;

bool remove(int value){
    lista_removido.clear();
    removido_lista.clear();  // Limpa a lista de removidos antes de começar, para não acumular valores de chamadas anteriores duplicados

    
    for (int i = 0; i < lista.size(); i++){
        if (lista[i] == value){
            int achou = i; //para permanecer os outros elementos repetidos na lista
            for (int j = 0; j < lista.size(); j++){
                if (achou != j){
                    removido_lista.push_back(lista[j]);
                }
                else{
                    continue;
                }
            }

            lista_removido = removido_lista;
            
            if (lista.size() < lista.capacity()/4){ //economiza memoria, já que tiramos demais os elementos e fica vazio, ocupando desnecessariamente muita memoria
                int capacidade_reduzida = lista.capacity() / 2;
                vector<int>novo;
                novo.reserve(capacidade_reduzida);
                for (int k = 0; k < lista.size(); k++){
                    novo.push_back(lista[k]);
                }

                lista = novo;
            }
            return true;
        }
    }
    return false;
}

int main(){
    int limite;
    cout << "Digite o limite da lista: ";
    cin >> limite;

    if (limite <= 0){
        cout << "Limite inválido" << endl;
        return 0;
    }

    cout << "Digite o elemento para formar a lista: ";
    for (int i = 0; i < limite; i++){
        int adiciona;
        cin >> adiciona;
        lista.push_back(adiciona);
    }

    int value;
    cout << "Digite o elemento a ser removido: ";
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
