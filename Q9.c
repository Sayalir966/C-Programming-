#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    int d = (++a, ++b, ++c, a + 5);

    printf("After evaluation:\n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    printf("d = %d\n", d);

    return 0;
}