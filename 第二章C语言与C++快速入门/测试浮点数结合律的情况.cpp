#include <stdio.h>
int main() {
    int n = 10^20;
    printf("%ld\n",n);
    double a = (3.14 + n) - n;
    double b = 3.14 + (n - n);
    printf("%f\n", a);
    printf("%f", b);



    return 0;
}
