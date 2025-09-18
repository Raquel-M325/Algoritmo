#include <iostream>

int soma(int a, int b) {
    int r = a + b;
}

int main() {
    int a, b;
    std::cin >> a >> b;
    int s = soma(a, b);
    std::cout << s << std::endl;
    return 0;
}

//30, 0, -5, 2000000000, 4, -1294967296 - porque?, 935362436