#include <stdio.h>
/*
#define pi 3.1415


int main() {
    int r = 0;
    double area = 0;
    printf("����뾶r��С:\n");
    scanf("%d", &r);
    area = pi * r * r;
    printf("��%dΪ�뾶�����Ϊ%.2f\n", r, area);


}
*/
const double pi = 3.1415;
int main() {

    double area1 = 0;
    int r = 0;
    printf("����뾶r:\n");
    scanf("%d", &r);
    area1 = pi * r * r;
    printf("�����%.3f", area1);

}
