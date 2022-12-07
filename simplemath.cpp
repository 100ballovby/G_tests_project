#include <cmath>

double cubic(double d) {
    return pow(d, 3);
}

bool is_even(int n) {
    return n % 2 == 0;
}

int min_el(int *arr, int len) {
    int min_i = -1;
    int min = 0;
    for (int i = 0; i < len; i++) {
        if (min > arr[i]) {
            min_i = i;
            min = arr[i];
        }
    }
    return min_i;
}