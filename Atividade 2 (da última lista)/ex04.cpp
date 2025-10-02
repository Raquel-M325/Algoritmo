#include <chrono>
#include <iostream>

bool prime(long long n) {
    int qty_divs = 0;
    for (long long d = 1; d <= n; ++d)
        if (n % d == 0)
            qty_divs = qty_divs + 1;
    return qty_divs == 2;
}

int main() {
    long long n;
    std::cin >> n;

    // Início do cronômetro
    auto beg = std::chrono::high_resolution_clock::now();
    bool p = prime(n);

    // Fim do cronômetro
    auto end = std::chrono::high_resolution_clock::now();

    if (p)
        std::cout << n << " is prime" << std::endl;
    else
        std::cout << n << " is not prime" << std::endl;

    auto dur = end - beg; // Duração do cronômetro
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(dur);
    std::cerr << n << " Processing time: "
              << duration.count() << " milliseconds(s)"<< std::endl;
    return 0;

}  

//respostas:
//0
//546
//1054
//1577
//2104
//2657
//3196
//3759
//4239
//4807
//5342
//5868
//6429
//6923
//7453
//7977
//8548
//9087
//9575
//10071
//10632
//11162
//11709
//12206
//13289
//13769
//14280
//15018
//15389
//15953
//16430
//17025
//17546
//18031
//18514
//19121
//19666
//20191
//20691