#include <stdio.h>
/*
#define pi 3.1415


int main() {
    int r = 0;
    double area = 0;
    printf("输入半径r大小:\n");
    scanf("%d", &r);
    area = pi * r * r;
    printf("以%d为半径的面积为%.2f\n", r, area);


}
*/
const double pi = 3.1415;
int main() {

    double area1 = 0;
    int r = 0;
    printf("输入半径r:\n");
    scanf("%d", &r);
    area1 = pi * r * r;
    printf("面积：%.3f", area1);

}
