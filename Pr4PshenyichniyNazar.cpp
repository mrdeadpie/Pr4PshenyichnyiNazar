#include <stdio.h>

int countDivisors(int n) {
    int count = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == n / i) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    printf("Введіть натуральне число n: ");
    scanf("%d", &n);

    int result = countDivisors(n);
    printf("Кількість рівних дільників числа %d: %d\n", n, result);

    return 0;
}
