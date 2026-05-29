#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int x = *(int *)a;
    int y = *(int *)b;

    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), compare);

    int longest = 1;
    int current = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            continue;
        }
        else if (arr[i] == arr[i - 1] + 1) {
            current++;
        }
        else {
            current = 1;
        }

        if (current > longest) {
            longest = current;
        }
    }

    printf("%d\n", longest);

    return 0;
}
