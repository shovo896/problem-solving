#include <stdio.h>

int main(void) {
    int x;
    if (scanf("%d", &x) != 1) return 0;
    for (int i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            if (i * i == x) {
                printf("%d ", i);
            } else {
                printf("%d %d ", i, x / i);
            }
        }
    }
    return 0;
}