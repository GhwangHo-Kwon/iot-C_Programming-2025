///*
//    const
//*/
//#include <stdio.h>
//
//int main()
//{
//    const int num = 10;
//    //num = 20;
//
//    int num2 = 10;
//    num2 = 20;
//    int* pnum2 = &num2;
//    *pnum2 = 30;
//    printf("%d\n", num2);
//
//    const int* pn2 = &num2;         // 데이터 상수화(포인터변수를 통한 데이터의 변경을 불허)
//    //*pn2 = 100;                   // 데이터 변경X
//    num2 = 0;
//    pn2 = &num2;
//
//    int num3 = 40;
//    int* const pnum3 = &num3;       // 포인터 상수화(포인터변수가 가르키는 주소의 변경을 불허)
//    *pnum3 = 100;
//    printf("%d\n", num3);
//    //pnum3 = &num2;                // 주소값 변경X
//
//    const int* const pn5 = &num2;   // 데이터 상수 + 포인터 상수
//    //*pn5 = 1000;
//    //pn5 = &num3;
//    num2 = 40;
//
//    return 0;
//}
