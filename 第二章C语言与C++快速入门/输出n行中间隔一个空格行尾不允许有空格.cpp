3
1 2 3
1 2 3
1 2 3
//两种思路，一种是打印空格，一种是直接填补空格。



//#include <cstdio>
//
//int main() {
//    int n;
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            printf("%d", j);
//            printf(j < n ? " " : "\n");
//        }
//    }
//    return 0;
//}

#include <cstdio>
int main() {
    int n = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        printf("1");
        for(int j = 2; j <= n; j++) {
            printf(" %d", j);
        }
        printf("\n");
    }






    return 0;
}
