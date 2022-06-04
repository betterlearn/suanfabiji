//注意逻辑非的运算符优先级在取余之上
#include <cstdio>
int main() {
    int n = 0,sum = 0;
    scanf("%d",&n);
    for(int i = 1; i <=n ; i++) {
        if(!(i%3)) continue;
        sum += i;
    }
    printf("%d", sum);



    return 0;
}
