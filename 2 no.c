#include <stdio.h>

int main() {
    int start = 100, end = 200;
    int count = 0, sum = 0;

    printf("Integers between %d and %d divisible by 9:\n", start, end);


    for (int i = start; i <= end; i++) {
        if (i % 9 == 0) {
            printf("%d ", i);
            count++;
            sum += i;
        }
    }

    printf("\n");
    printf("Number of integers divisible by 9: %d\n", count);
    printf("Sum of integers divisible by 9: %d\n", sum);

    return 0;
}
