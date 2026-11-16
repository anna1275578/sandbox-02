#include <cstdint>
#include <iostream>
int main() {
    std::uint32_t orange = 0xFF8800;
    int r = (orange >> 16) & 0xFF;
    int g = (orange >> 8) & 0xFF;
    int b = orange & 0xFF;
    std::cout << r << ' ' << g << ' ' << b << '\n';
}