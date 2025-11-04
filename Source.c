#include <stdio.h>
int main() {
    int i, j;
    for (i = 0; i <= 4; i++) {
        if (i == 0) {
            printf("0\n");
            continue;
        }
        for (j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("0");
        if (i == 3) {
            printf(" 3");
        }
        else if (i == 4) {
            printf(" 4 1");
        }
        printf("\n");
    }
    return 0;
}
