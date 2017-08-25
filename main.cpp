#include <iostream>

constexpr int size = 5;

static void RotateBitmap90DegreesClockwise(const uint8_t *source, uint8_t *dest) {
    for (int i = 0; i < size / 2 + size % 2; i++) {
        for (int j = i; j < size - 1 - i; j++) {
            int iprime = size - 1 - i;
            int jprime = size - 1 - j;
            uint8_t save = source[i * size + j];
            dest[i * size + j] = source[jprime * size + i];
            dest[jprime * size + i] = source[iprime * size + jprime];
            dest[iprime * size + jprime] = source[j * size + iprime];
            dest[j * size + iprime] = save;
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