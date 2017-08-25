#include <iostream>

constexpr int size = 5;

static void RotateBitmap90DegreesClockwise(uint8_t *source, uint8_t *dest) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            dest[i * size + (size - j - 1)] = source[j * size + i];
        }
    }
}

int main() {
    char *source = "abcdefghijklmnopqrstuvwxyz";
    char dest[26];
    std::cout << "Hello, World!" << std::endl;
    RotateBitmap90DegreesClockwise((uint8_t *)source, (uint8_t *)dest);
    dest[25] = 0;
    std::cout << dest << std::endl;
    return 0;
}