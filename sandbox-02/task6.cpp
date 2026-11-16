#include <cstdint>   
#include <iostream>  

// Складає три байти в одне число 0xRRGGBB
std::uint32_t pack(int r, int g, int b) {
    // r зсуваємо на 16 біт (старший байт), g на 8 (середній), b лишається молодшим
    // | склеює три частини
    return ((std::uint32_t)r << 16) | ((std::uint32_t)g << 8) | (std::uint32_t)b;
}

int main() {
    // std::hex друкує числа в шістнадцятковій системі
    std::cout << std::hex << pack(255, 136, 0) << ' ' << pack(0, 128, 255) << '\n';
}