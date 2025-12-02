#include <iostream>
#include <vector>
#include <chrono>


using namespace std;

vector<int> removido_lista;
vector<int> lista;
vector<int> lista_removido;

bool remove_at(int index){
    lista_removido.clear();
    removido_lista.clear();

    if (index < 0 || index >= lista.size()){
        return false;
    }

    for (int i = 0; i < lista.size(); i++){
        if (i == index){
            for (int j = 0; j < lista.size(); j++){
                if (j != index){
                    removido_lista.push_back(lista[j]);
                } else{
                    continue;
                }
           }

           if (lista.size() < lista.capacity() /4){
                int capacidade_reduzida = lista.capacity() /2;
                vector<int> novo;
                novo.reserve(capacidade_reduzida);

                for (int k = 0; k < lista.size(); k++){
                    novo.push_back(lista[k]);
                }
                lista = novo;
           }
        }
    }

    lista = removido_lista;
    lista_removido = removido_lista;
    return true;
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

    int remocao_elementos;
    cout << "Digite quantos elementos quer tirar: ";
    cin >> remocao_elementos;

    auto start = chrono::high_resolution_clock::now();

    int index;   

    for (int i = 0; i < remocao_elementos; i++){
        if (lista.empty()){
            cout << "\nLista vazia, não há mais elementos para remover." << endl;
            break;
        } 

        cout << "\nDigite o índice do elemento a ser removido: ";
        cin >> index;

        lista_removido.clear(); 

        bool resposta = remove_at(index);

        if (resposta == true){
            cout << "Lista após remoção: ";
            for (int x : lista_removido){
                cout << x << " ";
            }
        }
        else{
            cout << "Índice inválido. Lista permanece a mesma: ";
            for (int x : lista){
                cout << x << " ";
            }
        }
    }

    auto end = chrono::high_resolution_clock::now();

    auto duracao = chrono::duration_cast<chrono::milliseconds>(end - start).count();
    cout << "\n Tempo de execução para remoção por índice: " << duracao << "ms" << endl;

    return 0;
}
