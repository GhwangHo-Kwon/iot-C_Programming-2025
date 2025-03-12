#include <stdio.h>

int plus(int, int);
int minus(int, int);
int mul(int, int);
double div(int, int);

int main()
{
    int a, b;
    char oper;

    printf("계산기 프로그램입니다.\n");
    printf("두개의 정수를 입력하세요 > ");
    scanf_s("%d %d", &a, &b);

    printf("연산자를 입력하세요 > ");
    scanf_s(" %c", &oper, sizeof(oper));

    if (oper == '+') {
        printf("결과 : %d\n", plus(a, b));
    }
    else if (oper == '-') {
        printf("결과 : %d\n", minus(a, b));
    }
    else if (oper == '*') {
        printf("결과 : %d\n", mul(a, b));
    }
    else if (oper == '/') {
        if (b == 0) {
            printf("0으로 나눌 수 없습니다.\n");
        }
        else {
            printf("결과 : %.1lf\n", div(a, b));
        }
    }
    else {
        printf("연산자 입력 오류!\n");
    }

    return 0;
}

int plus(int a, int b) {
    int result = a + b;
    return result;
}

int minus(int a, int b) {
    int result = a - b;
    return result;
}

int mul(int a, int b) {
    int result = a * b;
    return result;
}

double div(int a, int b) {
    double result = (double)a / (double)b;
    return result;
}
