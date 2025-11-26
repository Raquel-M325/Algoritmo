#include <iostream>
#include <vector>

//escolhe o indice do elemento para tirar da lista

using namespace std;

vector<int> removido_lista;
vector<int> lista;
vector<int> lista_removido;

bool remove_at(int index){
    

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

    return 0;
}
