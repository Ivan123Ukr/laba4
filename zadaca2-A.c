#include <stdio.h>

int main() {
    int i;
    int sum = 0;
    double result;

    // Цикл з параметром: від -10 до 10 включно
    for (i = -10; i <= 10; i++) {
        if (i < 0) {
            sum += i;
        }
    }

    // Обчислення: половина від квадрату суми
    result = (sum * sum) / 2.0;

    printf("Сума всіх від’ємних чисел від -10 до 10 = %d\n", sum);
    printf("Половина від квадрату суми = %.2lf\n", result);

    return 0;
}
