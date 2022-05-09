//注意double类型的变量使用scanf的时候是lf而printf()是f
#include <stdio.h>
#include <math.h>
int main() {
    double d1;
    scanf("%lf",&d1);
    printf("%.2f %d %d %d %.2f", fabs(d1), (int)floor(d1), (int)ceil(d1), (int)round(d1), pow(d1, 5));
    return 0;
}
