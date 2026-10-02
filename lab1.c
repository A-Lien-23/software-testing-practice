#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, x0, h, p, x, ak, sumlast3;
    int n, m, i, k;
    printf("Введите a, b, c, x0, h, n, m:\n");
    scanf("%f%f%f%f%f%i%i",&a, &b, &c, &x0, &h, &n, &m);
    if (a < b)
        p = a - c;
    else
        p = b - c;
    printf("\np = %.4f\n",p);
    for (i = 1; i <= m; i++) 
    {
        x = x0 + (i - 1) * h;
        printf("\nДля i = %d, x = %f\n", i, x);
        ak = x * (p - 3) / 2.0;
        sumlast3 = 0.0;
        for (k = 1; k <= n; k++) {
            printf("a%d = %f\n", k, ak);
            if (k >= n - 2)
                sumlast3 += ak;
            ak = ak * (x * log(M_PI)) / k;
        }
        printf("Сумма последних трёх членов = %f\n", sumlast3);
    }
    return 0;
}