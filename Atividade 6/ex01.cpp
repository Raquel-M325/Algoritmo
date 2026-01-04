#include <iostream>

using namespace std;

bool labirinto(int linha, int coluna){
    if (linha < 0 || coluna < 0) {
        return 0; //número inválido
    }

    int matriz[linha][coluna];
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            cin >> matriz[i][j];
        }
    }

    if (matriz[0][0] == 1 || matriz[linha-1][coluna-1] == 1){
        return 0; //caminho bloqueado
    }
   
    bool resposta = false;

    //tentativa de ir no caminho para esquerda
    resposta = labirinto(linha, coluna, matriz, 0, -1);
    if (resposta == false){
        resposta = labirinto(linha, coluna, matriz, 0, 1); //tentativa de ir no caminho para direita 
    }

    if (resposta == false){
        resposta = labirinto(linha, coluna, matriz, -1, 0); //tentativa de ir no caminho para cima
    } 

    if (resposta == false){
        resposta = labirinto(linha, coluna, matriz, 1, 0); //tentativa de ir no caminho para baixo
    }

    return resposta; //retorna true se encontrou o caminho

}

int main(){
    int linha, coluna;
    cout << "Digite o numero de linhas: ";
    cin >> linha;
    cout << "Digite o numero de colunas: ";
    cin >> coluna;


    if (labirinto() == true){
        cout << "1" << endl; //caminho encontrado
    } else { 
        cout << "0" << endl; //caminho nao encontrado
    }
    return 0;
}