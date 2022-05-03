#include <stdio.h>
int main() {
    int a1=1, a2, b1=1, b2;
    a2 = ++a1;
    b2 = b1++;
    printf("%d%d\n", a1, a2);
    printf("%d%d\n", b1, b2);


    return 0;
}
