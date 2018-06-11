#include <iostream>
#include <cstring>

using namespace std;

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
}

int main() {
    char source[26] = "abcdefghijklmnopqrstuvwxy";
    char dest[26]   = "                         ";
    char target[26] = "upkfavqlgbwrmhcxsnidytoje";
    RotateImage90DegreesClockwise((uint8_t *)source, (uint8_t *)dest);
    dest[25] = 0;
    cout << "target: " << target << endl;
    cout << "dest:   " << dest << endl;
    if (!strncmp(dest, target, SIZE * SIZE)) {
        cout << "Correct." << endl;
    } else {
        cout << "Incorrect." << endl;
    }
    return 0;
}
