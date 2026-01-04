#include <iostream>

using namespace std;

void criar_matriz(int lab[20][20], int linha, int coluna){
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            cin >> lab[i][j];
        }
    }
}

int labirinto(int linha, int coluna, int linha_atual, int coluna_atual, int lab[20][20]){
    if (linha_atual < 0 || coluna_atual < 0 || linha_atual >= linha || coluna_atual >= coluna || lab[linha_atual][coluna_atual] != 0){
        return 0; //fora dos limites
    }


    if (linha_atual == linha - 1 && coluna_atual == coluna - 1){
        return 1; //chegou ao fim
    }

    lab[linha_atual][coluna_atual] = 2; //marca como visitado
    
    int resposta = labirinto(linha, coluna, linha_atual + 1, coluna_atual, lab) + //baixo
                   labirinto(linha, coluna, linha_atual - 1, coluna_atual, lab) + //cima
                   labirinto(linha, coluna, linha_atual, coluna_atual + 1, lab) + //direita
                   labirinto(linha, coluna, linha_atual, coluna_atual - 1, lab);   //esquerda

    lab[linha_atual][coluna_atual] = 0; //desmarca como visitado

    return resposta;
}

int main(){
    int linha, coluna;
    cout << "Digite o quanto de linhas: ";
    cin >> linha;
    cout << "Digite o quanto de colunas: ";
    cin >> coluna;

    if (linha <= 0 || coluna <= 0 || linha > 20 || coluna > 20){
        cout << "Dimensoes inválidas!" << endl;
        return 0;
    }
    
    int linha_atual = 0, coluna_atual = 0; 

    int lab[20][20]; //limite da matriz

    criar_matriz(lab, linha, coluna);

    cout << labirinto(linha, coluna, linha_atual, coluna_atual, lab) << endl;
    return 0;
}