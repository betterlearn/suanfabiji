//scanf�������Կո�Ϊ�����жϱ�־�ģ�����1�ո�23456�ո����Ϊ1��6������
#include <stdio.h>
int main() {
    char c1, c2;
    char str1[10];
    int a;

    scanf("%d%c%c%s", &a, &c1, &c2, str1);
    printf("a=%d,c1=%c,c2=%c,str1=%s", a, c1, c2, str1);

    return 0;
}
