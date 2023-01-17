#include<stdio.h>
#include<stdlib.h>
#define f(x) (1 / (1 + x * x))

int main() {
    float x_0, x_n, integration, size;
    int subinterval;
    printf("What are the lower and upper limit of integration?\n");
    scanf("%f %f", &x_0, &x_n);

    printf("What is the sub-interval? ");
    scanf("%d", &subinterval);

    size = (x_n - x_0) / subinterval;
    integration = f(x_0) + f(x_n); // (Yo + Yn)
    int i = 1;
    while (i < subinterval) {
        float k = 0;
        if (i % 2 == 0) k = 2 * f(x_0 + i * size);
        else k = 4 * f(x_0 + i * size);
        integration += k;
        i++;
    }
    integration *= (size / 3);

    printf("Required Solution of Simpson's 1/3rd rule is %f", integration);
    return 0;
}