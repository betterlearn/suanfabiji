#include <cstdio>
int main() {

    //c��0��ʾ�٣��������1��ʾ�棬����if(n)��n��Ϊ0���ʾΪ�棬
    //if(n != 0)���д�� if(n);����0�����д��if(!n)�ȼ���if(n == 0)

    int n1;
    scanf("%d", &n1);
    if(n1%2) {
        printf("%d������\n", n1);
    }else {
        printf("%d��ż��\n", n1);
    }


    int n2 = 0, n5 = 5;
    if(n2) {
        printf("n2 ������\n");
    }else {
        printf("n2 ����\n");

    }

    if(!n5) {
        printf("n5������\n")��;
    }else {
        printf("n5��������\n");
    }



    return 0;
}
