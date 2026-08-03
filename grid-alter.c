#include <stdio.h>

int main(void) {
    char st[3][4];
    for (int i = 0; i < 3; i++) {
        scanf("%3s", st[i]);
    }

    for (int i = 0; i < 3; i++) {
        int cnt[3] = {0};

        for (int j = 0; j < 3; j++) {
            if (st[i][j] != '?') {
                cnt[st[i][j] - 'a']++;
            }
        }

        if (cnt[0] == 0) {
            printf("a\n");
        } else if (cnt[1] == 0) {
            printf("b\n");
        } else if (cnt[2] == 0) {
            printf("c\n");
        }
    }

    return 0;
}
