// To Find the root of equation using heun's methon
#include<stdio.h>
#include<stdlib.h>
#define f(x, y) (y + x)
int main() {
    float x_0, y_0, x_n, h, k_1, k_2;
    printf("\nFinding the root of given equation using heun's method\n");
    printf("What are the value of Xo, Yo, h and Xn\n");
    scanf("%f %f %f %f", &x_0, &y_0, &h, &x_n);
    printf("\n\nX\t\tY\n");
    while (x_0 <= x_n) {
        printf("%f\t%f\n", x_0, y_0);
        k_1 = h*f(x_0, y_0);
        k_2 = h*f(x_0 + h, y_0 + k_1);
        y_0 += ((k_1 + k_2) / 2);
        x_0 += h;
    }
    return 0;
}