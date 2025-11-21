#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip> // para setprecision

using namespace std;

int main(){
    vector<int> lista;
    int n, k;
    cin >> n >> k;

    if (n <= 0){
        cout << "Não existe lista" << endl;
        return 0;
    } 

    // Lê n elementos
    for (int i = 0; i < n; i++){
        int adiciona;
        cin >> adiciona;
        lista.push_back(adiciona);
    }
    
    vector<double> notafinal_lista;

    // Combinações de 3 valores
    for (int i = 0; i < (int)lista.size(); i++){
        for (int j = i + 1; j < (int)lista.size(); j++){
            for (int t = j + 1; t < (int)lista.size(); t++){
                int soma = lista[i] + lista[j] + lista[t];
                double media = soma / 3.0;

                // arredonda para 2 casas
                double arredonda = round(media * 100.0) / 100.0;

                notafinal_lista.push_back(arredonda);
            }
        }
    }

    // Garantir que k é válido
    if (k < 0 || k >= (int)notafinal_lista.size()){
        cout << "Índice k inválido" << endl;
        return 0;
    }

    // Escolhe exatamente o índice que a pessoa pediu
    double escolhida = notafinal_lista[k];

    // imprime com 2 casas decimais
    cout << fixed << setprecision(2);

    cout << escolhida << endl;
    return 0;
}
