#include <stdio.h>

char convert(char);

int main()
{
    char str;

    printf("대소문자 변경 프로그램\n");
    printf("알파벳 1개를 입력하세요 > ");

    str = getchar();
    //scanf_s("%c", &str, sizeof(str));

    str = convert(str);

    printf("변환 값: %c\n", str);

    return 0;
}

char convert(char str) {
    if ((str >= 'A') && (str <= 'Z')) {
        str = str + ('a' - 'A');
    }
    else if ((str >= 'a') && (str <= 'z')) {
        str = str - ('a' - 'A');
    }
    return str;
}
