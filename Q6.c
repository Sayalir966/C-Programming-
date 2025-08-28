#include <stdio.h>

int sumDigits(int n) {
    if (n < 10)
        return n;
   
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sumDigits(sum);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
   
    int result = sumDigits(num);
    printf("Recursive sum of digits: %d\n", result);
   
    return 0;
}