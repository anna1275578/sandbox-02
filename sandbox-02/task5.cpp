#include <iostream>  

// Множить x на 10 лише зсувами й додаванням
int times10(int x) {
    // 10 = 8 + 2
    // x << 3 це x * 8, x << 1 це x * 2
    return (x << 3) + (x << 1);
}

int main() {
    // 7 * 10 = 70 і 25 * 10 = 250
    std::cout << times10(7) << ' ' << times10(25) << '\n';
}