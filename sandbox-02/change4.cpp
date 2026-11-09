#include <cstdint>
#include <iostream>
int main() {
    int flags = 6;
        if ((flags & 4) == 4) {   
        std::cout << "bit 2 is set\n";
    } else {
        std::cout << "bit 2 is clear\n";
    }
}