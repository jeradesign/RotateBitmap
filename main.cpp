#include <iostream>

constexpr int size = 4;

static void RotateBitmap90DegreesClockwise(const uint8_t *source, uint8_t *dest) {
    for (int i = 0; i < size / 2 + 1; i++) {
        for (int j = 0; j < size / 2 + 1; j++) {
            uint8_t save = source[j * size + i];
            dest[j * size + i] = source[(size - i - 1) * size + j];
            dest[(size - i - 1) * size + j] = source[(size - i - 1) * size + size - j - 1];
            dest[(size - i - 1) * size + size - j - 1] = source[i * size + size - j - 1];
            dest[i * size + size - j - 1] = save;
        }
    }
}

int main() {
    char source[26] = "abcdefghijklmnopqrstuvwxy";
    char dest[26];
    std::cout << "Hello, World!" << std::endl;
    RotateBitmap90DegreesClockwise((uint8_t *)source, (uint8_t *)source);
    source[25] = 0;
    std::cout << source << std::endl;
    return 0;
}