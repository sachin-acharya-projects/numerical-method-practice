#include<stdio.h>
#include<stdlib.h>
#define f(x, y) ((x - y) / (x + y))
// #define f(x, y) (x + y)

int main() {
    float x_0, y_0, x_n, h, k_1, k_2, k_3, k_4;
    printf("What are the values of Xo, Yo, Xn, and h\n");
    scanf("%f %f %f %f", &x_0, &y_0, &x_n, &h);
    printf("\n\nX\t\tY\n");
    while (x_0 <= x_n) {
        printf("%f\t%f\n", x_0, y_0);
        k_1 = h * f(x_0, y_0);
        k_2 = h * f(x_0 + (h / 2), y_0 + (k_1 / 2));
        k_3 = h * f(x_0 + (h / 2), y_0 + (k_2 / 2));
        k_4 = h * f(x_0 + h, y_0 + k_3);
        y_0 += (k_1 + 2 * k_2, + 2 * k_3 + k_4)/6;
        x_0 += h;
    }
    return 0;
}