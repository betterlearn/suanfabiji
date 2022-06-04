#include <cstdio>
int main() {
    int d;
    scanf("%d", &d);
    if(d < 0) {
        printf("Negative Number\n");
    }else if(d%2) {
        printf("Odd Number\n");
    }else {
        printf("Even Number\n");
    }



    return 0;
}
