#include <stdio.h>

void fibonacciSeries(int last_term) {
    int a = 0, b = 1, c;


    printf("%d %d ", a, b);


    while ((a + b) <= last_term) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}

int main() {
    int last_term = 300;

    printf("Fibonacci series up to the last term not exceeding 300:\n");
    fibonacciSeries(last_term);

    return 0;
}
