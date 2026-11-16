#include <cstdint>
#include <iostream>
int main() {
    int x = 5;
    std::cout << (x << 3) << '\n';
    std::uint8_t b = 200;
    b = (std::uint8_t)(b << 1);
    std::cout << (int)b << '\n';
    int neg = -16;
    std::cout << (neg >> 2) << '\n';
}