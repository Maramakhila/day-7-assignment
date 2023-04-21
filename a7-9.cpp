#include <stdio.h>

int main() {
    int i, j, sum;
    printf("Perfect numbers between 1 to 100:\n");

    for (i = 1; i <= 100; i++) {
        sum = 0;
        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }

        if (sum == i) {
            printf("%d\n", i);

        }
    }

    return 0;
}
