#include <stdio.h>
#include <math.h>

int main() {
    double x, y, z, a;
    double expression;

    while (1) {
        printf("Введіть значення x: ");
        if (scanf("%lf", &x) != 1) {
            printf("Помилка вводу. Спробуйте знову.\n");
            while (getchar() != '\n'); // очищення буфера
            continue;
        }

        printf("Введіть значення y: ");
        if (scanf("%lf", &y) != 1) {
            printf("Помилка вводу. Спробуйте знову.\n");
            while (getchar() != '\n');
            continue;
        }

        printf("Введіть значення z: ");
        if (scanf("%lf", &z) != 1) {
            printf("Помилка вводу. Спробуйте знову.\n");
            while (getchar() != '\n');
            continue;
        }

        expression = x * y * y + 2 * z;

        if (expression < 0) {
            printf("Помилка: підкореневий вираз x*y^2 + 2*z = %.2lf < 0\n", expression);
            printf("Задайте інші значення.\n\n");
        } else {
            break;
        }
    }

    a = sqrt(expression);
    printf("Результат: a = %.4lf\n", a);
    return 0;
}
