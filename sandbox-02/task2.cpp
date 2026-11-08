 #include <iostream>

// Повертає найменший степінь двійки, не менший за x
int next_pow2(int x) {
    int p = 1;           // починаємо з 1 (це 2 в степені 0)
    while (p < x) {      // поки p ще менше за x
        p <<= 1;         // подвоюємо p: 1, 2, 4, 8, 16...
    }
    return p;            // перший p, що не менший за x
}

int main() {
    std::cout << next_pow2(5) << ' ' << next_pow2(64) << ' ' << next_pow2(100) << '\n';
}