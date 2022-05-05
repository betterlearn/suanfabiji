//scanf（）是以空格为结束判断标志的，输入1空格23456空格输出为1到6的内容
#include <stdio.h>
int main() {
    char c1, c2;
    char str1[10];
    int a;

    scanf("%d%c%c%s", &a, &c1, &c2, str1);
    printf("a=%d,c1=%c,c2=%c,str1=%s", a, c1, c2, str1);

    return 0;
}
