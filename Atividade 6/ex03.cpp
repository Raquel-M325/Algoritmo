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
    if (linha_atual < 0 || coluna_atual < 0 || linha_atual >= linha || coluna_atual > = coluna || lab[linha_atual][coluna_atual] !== 0){
        return 0;
    }

    if (linha_atual == linha - 1 && coluna_atual == coluna - 1){
        return 1;
    }

    

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

    fazer_matriz(int lab, int linha, int coluna);

    cout << labirinto(int lab, int linha, int coluna, int coluna_atual, int linha_atual) << endl;
    return 0;
}