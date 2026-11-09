#include <cstdint>   
#include <iostream>  

const std::uint8_t UP = 1u << 0;     // біт 0, значення 1
const std::uint8_t DOWN = 1u << 1;   // біт 1, значення 2
const std::uint8_t LEFT = 1u << 2;   // біт 2, значення 4
const std::uint8_t RIGHT = 1u << 3;  // біт 3, значення 8
const std::uint8_t BTN_A = 1u << 4;  // біт 4, значення 16
const std::uint8_t BTN_B = 1u << 5;  // біт 5, значення 32

// Друкує назви натиснутих кнопок через пробіл
void print_pad(std::uint8_t pad) {
    if ((pad & UP) != 0) std::cout << "UP ";
    if ((pad & DOWN) != 0) std::cout << "DOWN ";
    if ((pad & LEFT) != 0) std::cout << "LEFT ";
    if ((pad & RIGHT) != 0) std::cout << "RIGHT ";
    if ((pad & BTN_A) != 0) std::cout << "A ";
    if ((pad & BTN_B) != 0) std::cout << "B ";
    std::cout << '\n';  
}

int main() {
    print_pad(0x19);  // 0001 1001 -> UP, RIGHT, A
    print_pad(0x22);  // 0010 0010 -> DOWN, B
}