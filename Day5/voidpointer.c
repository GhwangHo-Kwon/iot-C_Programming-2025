///*
//    함수 포인터 : 함수이름(함수의 시작위치) 자체가 포인터(주소)
//*/
//#include <stdio.h>
//
//int sum(int, int);
//int min(int, int);
//
//int main()
//{
//    int (*fp)(int, int);        // 함수 포인터를 사용하려면 입출력 (자료형)형태가 같아야함.
//    int res;
//    //res = sum(20, 10);
//    //res = min(20, 10);
//    fp = sum;               // 함수 포인터로 함수 호출
//    res = fp(20, 10);
//    printf("res: %d\n", res);
//
//    return 0;
//}
//
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
