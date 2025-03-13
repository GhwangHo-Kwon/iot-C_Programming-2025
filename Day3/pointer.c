///*
//    pointer - 주소
//    포인터 변수 - 주소를 저장할 수 있는 변수
//*/
//#include <stdio.h>
//
//int main()
//{
//    //int p;          // int타입의 변수 선언
//    //int* p;         // int타입의 포인터 변수 선언
//    //int* pc;        // char타입의 포인터 변수 선언
//    //double *pd;     // * 표시의 위치는 상관 없음
//
//    int num = 100;
//    printf("num의 주소: %p\t", &num);
//    printf("num의 값: %d\n", num);
//    int* p = &num;                                          // 여기서 *는 포인터연산자 표시
//    printf("포인터변수 p에 저장된 값: %p\t", p);
//    printf("포인터변수 P가 가르키는 곳의 값: %d\n", *p);     // 여기서 *는 간접참조 연산자
//    num += 1;
//    printf("num: %d, *p: %d\n", num, *p);
//    *p += 1;
//    printf("num: %d, *p: %d\n", num, *p);
//
//    return 0;
//}
