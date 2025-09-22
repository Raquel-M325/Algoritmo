#include <iostream>

int perimetro(int l1, int l2) {
    int r = 2 * (l1 + l2);
    return r;
}

int main(){
    int l1, l2;
    std::cin >> l1 >> l2;
    int p = perimetro(l1, l2);
    std::cout << p << std::endl;
    return 0;
}

//testes:
// 5 e 6 deu 22
// -9 e -100 deu -218
//0 e 0 deu 0
//10000000000 e 1000000000 deu -1454759936 (porque ultrapassou o limite do int, que é 32 bits, então devo usar long long ao invés do int)
//5.5 deu 10 (já que o int não aceita números com vírgula, então ele tira o decimal e considera só o 5, operando com o número da decimal)
