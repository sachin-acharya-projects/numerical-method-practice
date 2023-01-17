#include<stdio.h>
#include<stdlib.h>

#define f(x) (1 / (x * x))

int main() {
    float lower, upper, integration = 0.0, size;
    int subinterval, i;
    printf("What are the Lower and Upper limit of Integration, (lower, upper)\n");
    scanf("(%f, %f)", &lower, &upper);

    printf("What are the total sub-intervals\n");
    scanf("%d", &subinterval);

    size = (-lower + upper) / subinterval;
    integration = (f(lower) + f(upper)) / 2; // (Yo + Yn)
    for (i = 0; i < subinterval; i++) {
        integration += f(lower + i * size);
    }

    integration *= size;

    printf("The definite integral of function between (%f, %f) is %f", lower, upper, integration);
    return 0;
}