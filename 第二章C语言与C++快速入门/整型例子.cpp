/**
int型的占用多少？
int 占用32bit,即4字节。绝对值在10^9范围以内或者说32位的整数都可以定义成整数。

long型占用64bit,即8字节。绝对值在10^18以内或者说64位的整数的都可以用longlong 定义，
如果超过2^31-1的初值，则需要数值后面加上LL。

*/

#include <stdio.h>
int main() {
    int a = 1, b = 2;
    printf("%d", a + b);
    return 0;
}
