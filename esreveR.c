#include <stddef.h>

void reverse(size_t length, const int array[length], int reversed[length]) {
    for (size_t i = 0; i < length; i++) {
        reversed[i] = array[length - i - 1];
    }
}