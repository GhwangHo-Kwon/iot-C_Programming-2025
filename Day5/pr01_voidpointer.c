//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int sum(int, int);
//int min(int, int);
//int mul(int, int);
//double div(int, int);
//
//int main()
//{
//    int a = 0, b = 0;
//    char oper = ' ';
//
//    printf("두 숫자를 입력하세요 > ");
//    scanf("%d %d", &a, &b);
//    printf("연산자를 입력하세요 > ");
//    scanf(" %c", &oper);
//
//    func(a, b);
//
//    return 0;
//}
//
//int sum(int a, int b)
//{
//    int res = a + b;
//    return res;
//}
//
//int min(int a, int b)
//{
//    int res = a - b;
//    return res;
//}
//
//int mul(int a, int b)
//{
//    int res = a * b;
//    return res;
//}
//
//double div(int a, int b)
//{
//    double res = (double)a / (double)b;
//    return res;
//}
//
//func(int(*fp)(int, int))
//{
//    printf("%d", sum(*fp, *fp));
//}
//void func(int a, int b, char oper)
//{
//    if (oper == '+') {
//        printf("결과: %d\n", sum(a, b));
//    }
//    else if (oper == '-') {
//        printf("결과: %d\n", min(a, b));
//    }
//    else if (oper == '*') {
//        printf("결과: %d\n", mul(a, b));
//    }
//    else if (oper == '/') {
//        if (b == 0) {
//            printf("0으로는 나눌 수 없습니다!");
//        }
//        else {
//            printf("결과: %.1lf\n", div(a, b));
//        }
//    }
//}
