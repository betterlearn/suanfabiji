#include <stdio.h>
typedef struct person {
    char name[10];
    int age;
    char gender;
} PERSON;

int main() {


    PERSON p1 = {"王林", 10, 'M'};

    printf("%s今年%d岁了", p1.name, p1.age);


    return 0;
}
