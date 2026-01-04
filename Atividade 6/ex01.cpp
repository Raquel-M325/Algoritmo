#include <iostream>

using namespace std;


void matriz_criada(int lab[20][20],int linha, int coluna){
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            cin >> lab[i][j];
        }
    }
   }

bool labirinto(int lab[20][20], int linha, int coluna, int linha_atual = 0, int coluna_atual = 0){    
    if (linha_atual >= linha || coluna_atual >= coluna || linha_atual < 0 || coluna_atual < 0 || lab[linha_atual][coluna_atual] != 0){
        return false; //fora dos limites
    }

    if (linha_atual == linha - 1 && coluna_atual == coluna - 1){
        return true; //caminho encontrado
    }

    lab[linha_atual][coluna_atual] = 2; //marca como visitado

    bool resposta = false;

    resposta = labirinto(lab, linha, coluna, linha_atual + 1, coluna_atual); //baixo

    if (resposta == false){
        resposta = labirinto(lab, linha, coluna, linha_atual, coluna_atual + 1); //direita
    }

    if (resposta == false){
        resposta = labirinto(lab, linha, coluna, linha_atual, coluna_atual - 1); //esquerda
    }

    if (resposta == false){
        resposta = labirinto(lab, linha, coluna, linha_atual - 1, coluna_atual); //cima
    }

    return resposta; 
}

int main(){
    int linha, coluna;
    cout << "Digite o numero de linhas: ";
    cin >> linha;
    cout << "Digite o numero de colunas: ";
    cin >> coluna;

    int lab[20][20];

    matriz_criada(lab, linha, coluna);

    cout << labirinto(lab, linha, coluna) << endl;

    return 0;
}