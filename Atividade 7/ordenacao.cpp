#include "ordenacao.hpp"

/* TODO: Implementar função */
bool ordenado(int a[],  unsigned int t){
    if (t == 0 or t == 1){
        return true; //já está ordenado seja vazio ou só um elemento
    }

    for (unsigned int i = 0; i < t - 1; i++){
        if (a[i] > a[i + 1]){
            return false;
        }
    }

    return true;
}

/* TODO: Implementar função */
void selecao(int a[], unsigned int t){ //notação Oh(n^2)!!!!!
    for (unsigned int i = 0; i < t - 1; i++){
        for (unsigned int j = i + 1; j < t; j++){
            int menor = i;

            //ver quem é o menor para mudar
                if (a[j] < a[menor]){
                    menor = j;
                }
            }

        //para permanecer a mudança  
        int aux = a[i];
        a[i] = a[menor]; //troquei
        a[menor] = aux; //firmou e trocou!
    }
}

/* TODO: Implementar função */
void insercao(int a[], unsigned int t){
    for (unsigned int i = 0; i < t - 1; i++){
      
    }
}

/* TODO: Implementar função */
void merge_sort(int a[], unsigned int t);
