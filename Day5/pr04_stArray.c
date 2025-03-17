#include <stdio.h>

typedef struct addr {
    char name[20];
    int age;
    char tel[20];
    char addr[100];
} Addr;

void print_list(Addr *, int);

int main()
{
    int len;

    Addr list[3] = { { "홍길동", 100, "010-123-1234", "대구" },
                     { "김철수",  33, "010-222-2222", "부산" },
                     { "김영희",  24, "010-333-3333", "울산" } };

    len = sizeof(list) / sizeof(list[0]);

    print_list(list, len);

    //for (int i = 0; i < 3; i++) {
    //    printf("%s, %d, %s, %s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
    //}

    return 0;
}

void print_list(Addr *list, int len)
{
    for (int i = 0; i < len; i++) {
        printf("%s, %d, %s, %s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
    }
}
