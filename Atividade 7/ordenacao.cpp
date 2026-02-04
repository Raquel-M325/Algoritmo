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
void insercao(int a[], unsigned int t){ //notação Oh(n^2)
    int insere, ao_lado; 
    for (unsigned int i = 1; i < t; i++){
        insere = a[i];
        ao_lado = i - 1;
        
        while (insere < a[ao_lado] && ao_lado >= 0){
            a[ao_lado + 1] = a[ao_lado]; //empurrei
            ao_lado = ao_lado - 1 //fica empurrando
        }
        
        a[ao_lado + 1] = insere;
    }
}

void merge(int a[],int inicio_Esquerda, int inicio_Direita, int fim_Direita, int fim_Esquerda) { //notação Oh(n)

    //quantidade de elementos que existem no total
    int tamanho = (fim_Direita - inicio_Direita + 1) + (fim_Esquerda - inicio_Esquerda + 1);

    int* aux = new int[tamanho];

    int anda_Esquerda = inicio_Esquerda;
    int anda_Direita = inicio_Direita;
    int anda_auxiliar = 0;

    //enquanto houver elementos em ambos lados
    while (anda_Esquerda <= fim_Esquerda && anda_Direita <= fim_Direita) {

        //se for menor
        if (a[anda_Esquerda] < a[anda_Direita]) {
            aux[anda_auxiliar++] = a[anda_Esquerda++];
        } else {
            aux[anda_auxiliar++] = a[anda_Direita++];
        }
    }

    //se enquanto sobrou algo na esquerda
    while (anda_Esquerda <= fim_Esquerda) {
        aux[anda_auxiliar++] = a[anda_Esquerda++];
    }

    //se enquanto sobrou algo na direita
    while (anda_Direita <= fim_Direita) {
        aux[anda_auxiliar++] = a[anda_Direita++];
    }

    int anda_a = inicio_Esquerda;
    for (int i = 0; i < tamanho; i++) {
        a[anda_a++] = aux[i];
    }

    delete[] aux;
}


void divisao(int a[], int inicio, int fim){ //tá participando do merge sort da notação já respondida
    if (inicio < fim){
        int meio = (inicio + fim) / 2;
        divisao(a, inicio, meio); //lado esquerda
        divisao(a, meio + 1, fim); //lado direito
        merge(a, inicio, meio + 1, fim, meio); //ao todo

       } 
}

/* TODO: Implementar função */
void merge_sort(int a[], unsigned int t){ //notação(n log n)
    if (t > 1){
       divisao(a, 0, t - 1);

    }
}
