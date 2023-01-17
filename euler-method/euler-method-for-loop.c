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
    int n = ((x_n - x_0) / h) + 1;
    float x = x_0, y = y_0;
    for (int i = 0; i < n; i++) {
        printf("%d\t%0.2f\t%f\n", count, x_0, y_0);
        y = y_0 + h * f(x_0, y_0);
        x += h;
        count++;
        if (x < x_n) {
            x_0 = x;
            y_0 = y;
        } else {
            break;
        }
    }
 }