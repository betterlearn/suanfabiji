#include <stdio.h>
typedef struct person {
    char name[10];
    int age;
    char gender;
} PERSON;

int main() {


    PERSON p1 = {"����", 10, 'M'};

    printf("%s����%d����", p1.name, p1.age);


    return 0;
}
