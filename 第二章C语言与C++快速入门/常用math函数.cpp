#include <stdio.h>
#include <math.h>

const double pi = acos(-1.0);

int main() {

    //fabs(double c)
    double n1 = -5.5;
    printf("%.2f\n", fabs(n1));

    //floor(double x) ceil(double x)
    //��ȡ������������ȡ������
    double n2 = -5.6, n3 = 5.6;
    printf("%.2f,%.2f\n",floor(n2), ceil(n2));
    printf("%.2f,%.2f\n",floor(n3), ceil(n3));

    //�������뺯��round(double x)

    double n4 = 5.3;
    int n41 = int(n4);
    printf("n4����������:%d\n", n41);

    //����r^q pow(double r, double q)
    double r = 2, q = 10;
    printf("2^10 = %.2f\n", pow(r, q));

    //��ƽ���� sqrt(double n)
    double n5 = 10;
    printf("%.5f\n", sqrt(n5));

    //����eΪ�����Ķ���,ע�������ж���ֻ����eΪ�׵Ķ���
    double n6 = 3;
    printf("%.2f\n", log(n6));

    //���ǡ������Ǻ�����ע��ʹ�û�����
    printf("pi = %f\n", pi);
    double s1 = sin(pi * 30 / 180);
    double s2 = cos(pi * 30 / 180);
    double s3 = tan(pi * 45 / 180);
    printf("%.2f %.2f %.2f\n", s1, s2, s3);

    //�����Ǻ��� asin(double x) acos(double x) atan(double x)
    double fs1 = asin(1);
    double fs2 = acos(-1.0);
    double fs3 = atan(0);
    printf("%f %f %f \n", fs1, fs2, fs3);





    return 0;
}
