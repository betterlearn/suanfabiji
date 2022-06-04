#include <cstdio>
int main() {

    //c中0表示假，非零比如1表示真，所以if(n)若n不为0则表示为真，
    //if(n != 0)便可写成 if(n);等于0便可以写成if(!n)等价与if(n == 0)

    int n1;
    scanf("%d", &n1);
    if(n1%2) {
        printf("%d是奇数\n", n1);
    }else {
        printf("%d是偶数\n", n1);
    }


    int n2 = 0, n5 = 5;
    if(n2) {
        printf("n2 不是零\n");
    }else {
        printf("n2 是零\n");

    }

    if(!n5) {
        printf("n5等于零\n")；;
    }else {
        printf("n5不等于零\n");
    }



    return 0;
}
