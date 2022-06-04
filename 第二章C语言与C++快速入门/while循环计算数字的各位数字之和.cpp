#include <cstdio>
int main() {
    int n = 12340, sum = 0;
    while(n) {
        sum = sum + n % 10;
        n /=10;
    }
    printf("%d\n", sum);













    return 0;
}
