#include <stdio.h>

int main() {
    double x, y;
    double a = -10.0, b = 20.0, dx = 0.5;

    printf("+------------+------------+\n");
    printf("|     x      |     y      |\n");
    printf("+------------+------------+\n");

    for (x = a; x <= b; x += dx) {
        y = x * x - 2 * x + 3;
        printf("| %10.2f | %10.2f |\n", x, y);
    }

    printf("+------------+------------+\n");

    return 0;
}
