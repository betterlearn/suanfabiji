#include <stdio.h>
int main() {
    //����
    printf("abc\ndef\n");
    //% \�����
    printf("%%\\\n");

    int n1= 12, n2 = 1234567;
    //����5λ�Ҷ��룬�����ո���
    printf("%5d\n%d\n", n1, n2);

    //��0�����λ
    printf("%05d\n%d\n", n1, n2);

    double pi = 3.1415926;
    printf("%.3f\n", pi);





    return 0;
}
