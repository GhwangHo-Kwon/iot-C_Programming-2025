#include <stdio.h>

int main()
{
    char name[20];
    int age;

    //printf("나이: ");
    //scanf_s("%d", &age);
    //printf("이름: ");
    //scanf_s("%s", name, sizeof(name);
    printf("나이와 이름 입력: ");
    scanf_s("%d %s", &age, name, sizeof(name));

    printf("이름: %s, 나이: %d\n", name, age);

    return 0;
}
