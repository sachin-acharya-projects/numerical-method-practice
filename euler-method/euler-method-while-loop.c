// How to find the root of equation using Euler's method (₀) (ₙ)
#include <stdio.h>
#include<stdlib.h>
#define f(x, y) ((y - x) / (y + x))
int main() {
    float x_0, y_0, x_n, h;
    printf("What are the values of Xo, Yo, Xn, h\n");
    scanf("%f %f %f %f", &x_0, &y_0, &x_n, &h);
    printf("\n\nN.\tX\t\tY\n");
    int count = 0;
    while (x_0 < x_n) {
        printf("%d\t%0.2f\t%f\n", count, x_0, y_0);
        y_0 = y_0 + h * f(x_0, y_0);
        x_0 += h;
        count++;
    }
}