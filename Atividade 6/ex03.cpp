#include <iostream>

using namespace std;

void fazer_matriz(int lab[20][20], int coluna, int linha){
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            cin >> lab[i][j];
        }
    }
}

int labirinto(int lab[20][20], int linha, int coluna, int linha_atual, int coluna_atual){
    if (linha_atual < 0 || coluna_atual < 0 || linha_atual >= linha || coluna_atual >= coluna || lab[linha_atual][coluna_atual] != 0){
        return -1;
    }

    if (linha_atual == linha - 1 && coluna_atual == coluna - 1){
        return 1;
    }

    lab[linha_atual][coluna_atual] = 2;

    bool resposta = false;
    int contagem = 0;
    resposta = labirinto(lab, linha, coluna, linha_atual + 1, coluna_atual);
    if (resposta == false){
        resposta = labirinto(lab, linha, coluna, linha_atual, coluna_atual + 1);
        contagem += 0;
    } else {
        contagem += 1;
    }

    if (resposta == false){
        resposta = labirinto(lab, linha, coluna, linha_atual - 1, coluna_atual);
        contagem += 0;
    } else {
        contagem += 1;
    }

    if (resposta == false){
        resposta = labirinto(lab, linha, coluna, linha_atual, coluna_atual - 1);
        contagem += 0;
    } else {
        contagem += 1;
    }

    if (resposta == false){
        return -1;
    }

    return contagem;
}

int main(){
    int linha, coluna;
    cout << "Digite o numero de linhas: ";
    cin >> linha;
    cout << "Digite o numero de colunas: ";
    cin >> coluna;

    if (linha < 0 || coluna < 0) {
        cout << "Numero invalido!" << endl;
        return -1;
    }

    int lab[20][20];

    int coluna_atual = 0, linha_atual = 0;

    fazer_matriz(lab, linha, coluna);

    cout << labirinto(lab, linha, coluna, coluna_atual, linha_atual) << endl;
    return 0;
}