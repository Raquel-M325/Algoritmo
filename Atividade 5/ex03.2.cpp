#include <iostream>
#include <vector>

//escolhe o indice do elemento para tirar da lista

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
                }5
           }
           
        }
        
    }
    lista_removido = removido_lista;
    return true;
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

    int index;
    cin >> index;

    bool resposta = remove_at(index);

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
