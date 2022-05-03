#include <stdio.h>
#define Cal(x) x*2 + 1
int main() {
    int a = 1;
    printf("%d\n", Cal(a + 1));
    //输出为4而非5，因为宏定义是直接替换成了a + 1 * 2 + 1等于4

    return 0;
}
