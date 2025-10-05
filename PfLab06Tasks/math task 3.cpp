#include <stdio.h>
#include <math.h>  

int main() {
    double P, r, n, t, A;

    printf("Enter principal amount: ");
    scanf("%lf", &P);

    printf("Enter annual interest rate (in percent): ");
    scanf("%lf", &r);
    r = r / 100;  

    printf("Enter number of times interest compounded per year: ");
    scanf("%lf", &n);

    printf("Enter time in years: ");
    scanf("%lf", &t);

    A = P * pow((1 + r / n), n * t);  

    printf("Future Value = %.2lf\n", A);

    return 0;
}

