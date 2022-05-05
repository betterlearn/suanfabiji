#include <stdio.h>
int main() {
    //换行
    printf("abc\ndef\n");
    //% \的输出
    printf("%%\\\n");

    int n1= 12, n2 = 1234567;
    //保持5位右对齐，不够空格补齐
    printf("%5d\n%d\n", n1, n2);

    //用0补齐空位
    printf("%05d\n%d\n", n1, n2);

    double pi = 3.1415926;
    printf("%.3f\n", pi);





    return 0;
}
