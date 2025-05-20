#include <stdio.h>

int main() {
    int i = -10;
    int sum = 0;
    
    // Цикл з післяумовою (do...while)
    do {
        if (i < 0) {
            sum += i;
        }
        i++;
    } while (i <= 10);

    // Обчислення половини від квадрату суми
    int result = (sum * sum) / 2;

    // Виведення результату
    printf("Результат: %d\n", result);

    return 0;
}
