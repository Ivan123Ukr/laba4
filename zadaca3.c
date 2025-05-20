#include <stdio.h>

int main() {
    double sum = 0.0;

    for (int i = 1; i <= 30; i++) {
        for (int j = 1; j <= i; j++) {
            sum += 1 + (i / 2.0) + (j * j);
        }
    }

    printf("Результат обчислення: %.2f\n", sum);

    return 0;
}
