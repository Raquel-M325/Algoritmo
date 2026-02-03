#include <iostream>

using namespace std;

void fazer_matriz(int lab[20][20], int linha, int coluna){
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

    int direita = labirinto(lab, linha, coluna, linha_atual, coluna_atual + 1);
    int esquerda = labirinto(lab, linha, coluna, linha_atual, coluna_atual - 1);
    int cima = labirinto(lab, linha, coluna, linha_atual - 1, coluna_atual);
    int baixo = labirinto(lab, linha, coluna, linha_atual + 1, coluna_atual);

    int menor = 100000000; //para comparar

    if(direita != -1){
        menor = min(menor, direita);
    }
    if (esquerda != -1){
        menor = min(menor, esquerda);
    }
    if (cima != -1){
        menor = min(menor, cima);
    }
    if (baixo != -1){
        menor = min(menor, baixo);
    }
    
    lab[linha_atual][coluna_atual] = 0;

    if (menor == 100000000){
        return -1;
    }

    return menor + 1;
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

    cout << labirinto(lab, linha, coluna, 0, 0) << endl;
    return 0;
}