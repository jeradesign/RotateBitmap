#include <iostream>

constexpr int SIZE = 5;

// Rotate a SIZE * SIZE image of uint8_t pixels 90 degrees clockwise.
//
// abcde     upkfa
// fghij     vqlgb
// klmno --> wrmhc
// pqrst     xsnid
// uvwxy     ytoje
//
static void RotateImage90DegreesClockwise(const uint8_t *source, uint8_t *dest) {
    for (int i = 0; i < SIZE / 2 + SIZE % 2; i++) {
        for (int j = i; j < SIZE - 1 - i; j++) {
            int iprime = SIZE - 1 - i;
            int jprime = SIZE - 1 - j;
            uint8_t save = source[i * SIZE + j];
            dest[i * SIZE + j] = source[jprime * SIZE + i];
            dest[jprime * SIZE + i] = source[iprime * SIZE + jprime];
            dest[iprime * SIZE + jprime] = source[j * SIZE + iprime];
            dest[j * SIZE + iprime] = save;
        }
    }
}

int main() {
    char source[26] = "abcdefghijklmnopqrstuvwxy";
    char dest[26]   = "                         ";
    RotateImage90DegreesClockwise((uint8_t *)source, (uint8_t *)dest);
    dest[25] = 0;
    std::cout << dest << std::endl;
    return 0;
}
