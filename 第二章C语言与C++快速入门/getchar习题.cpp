#include <stdio.h>
int main() {

    int d1;
    char c1;
    scanf("%d", &d1);
    getchar();
    c1 = getchar();
    printf("%d\n%c", d1 + 1, c1);
    return 0;
}

/*
小技巧：有一些题目需要先输入一个整数，然后输入多行字符串，这时候如果用gets、getline之类用来输入字符串的函数，
都会把换行给接收到，导致输入的结果有问题。这时候可以考虑用getchar来接收整数后的换行，使后续的整行字符串能顺利读入。
*/
