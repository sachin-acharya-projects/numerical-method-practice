#include<stdio.h>
#include<stdlib.h>
#define S 50

int main() {
    int n, x[S], y[S], a, b, sum_x = 0, sum_y = 0, sum_x_2 = 0, sum_xy = 0;

    printf("What number of Data? ");
    scanf("%d", &n);

    printf("Enter the values of X\n");
    for (int i = 0; i < n ; i++) {
        printf("\nX[%d] ", i + 1);
        scanf("%d", &x[i]);
    }

    printf("Enter the values of Y\n");
    for (int i = 0; i < n ; i++) {
        printf("\nX[%d] ", i + 1);
        scanf("%d", &y[i]);
    }

    for (int i = 0 ; i< n; i++) {
        sum_x += x[i];
        sum_x_2 += (x[i] * x[i]);
        sum_y += y[i];
        sum_xy += (x[i] * y[i]);
    }

    b = (n * sum_xy - sum_x * sum_y) / (n * sum_x_2 - sum_x * sum_x);
    a = (sum_y - b * sum_x) / n;

    printf("The required solution is %d + (%dX)", a, b);
    return 0;
}