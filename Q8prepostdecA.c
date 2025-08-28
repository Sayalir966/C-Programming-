#include <stdio.h>

int main() {
    int i = 5, x = 3, p = 9;
    int k1 = i++, k2 = ++i;
    int y1 = x++ * 10, y2 = ++x * 10;
    int q1 = p-- / 3, q2 = --p / 3;

    printf("Post and Pre Increment Comparison:\n");
    printf("k = i++ -> %d\n", k1);
    printf("k = ++i -> %d\n", k2);

    printf("\ny = x++ * 10 -> %d\n", y1);
    printf("y = ++x * 10 -> %d\n", y2);

    printf("\nq = p-- / 3 -> %d\n", q1);
    printf("q = --p / 3 -> %d\n", q2);

    return 0;
}