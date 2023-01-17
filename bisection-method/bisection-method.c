#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) (pow(x, 3) - 4 * x - 9)

int main() {
    int n = 1;
    float x_0, x_1, x_c, fa, fb, fc, e;
    printf("What are the initial guesses? ");
    scanf("%f %f", &x_0, &x_1);

    printf("\nWhat is the tolerable error? ");
    scanf("%f", e);

    printf("Hello World");
    fa = f(x_0);
    fb = f(x_1);
    if (fa * fb < 0) {
        printf("\nStep\t\tXa\t\tXb\t\tF(a)\t\tF(b)\t\tXc\t\tF(c)\n");
        do {
            x_c = (x_0 + x_1) / 2;
            fc = f(x_c);

            printf("%d\t%f\t%f\t%f\t%f\t%f\t%f\n", n, x_0, x_1, fa, fb, x_c, fc);

            if (fa * fc < 0)  {
                x_1 = x_c;
                fb = fc;
            } else {
                x_0 = x_c;
                fa = fc;
            }
            n++;
        } while(fabs(fc) > e);
        printf("\nRequired Root is %f", x_c);
    } else {
        printf("Initial Values (%d, %d) are not acceptable", x_0, x_1);
    }
}