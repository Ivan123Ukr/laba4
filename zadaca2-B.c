#include <stdio.h>

int main() {
    int i = -10;
    int sum = 0;

    // Цикл з передумовою: поки i <= -1
    while (i <= -1) {
        sum += i;
        i++;
    }

    int square = sum * sum;
    float result = square / 2.0;

    printf("Сума від'ємних чисел: %d\n", sum);
    printf("Квадрат суми: %d\n", square);
    printf("Половина від квадрату суми: %.2f\n", result);

    return 0;
}
