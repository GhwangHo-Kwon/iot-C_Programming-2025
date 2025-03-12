//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//    int n = 30;
//    int res;
//
//    res = (n > 10) && (n < 20);     // AND연산자 : 좌항과 우항 둘다 참일경우만 참(1) 출력
//    printf("res: %d\n", res);       // 위 경우 거짓(0)이 출력
//
//    res = (n < 10) || (n > 20);     // OR연산자 : 좌항과 우항 중 하나라도 참일경우 참(1) 출력
//    printf("res: %d\n", res);       // 위 경우 참(1)이 출력
//
//    res = (n >= 30);                // 복합 대입연산자 : 좌항과 우항 값을 비교 후 참, 거짓을 출력
//    printf("res: %d\n", res);       // 위 경우 참(1)이 출력
//
//    res = !(n >= 30);               // 부정 연산자 : 좌항과 우항 값을 비교 후 참, 거짓을 뒤집어 출력
//    printf("res: %d\n", res);       // 위 경우 거짓(0)이 출력
//
//    res = ~n;                       // 비트 연산자 : 값을 2진수로 바꾼 후 나온 0과 1의 값들을 뒤집어 출력
//    printf("res: %d\n", res);       // 위 경우 -31이 출력
//
//                                    // 시프트 연산자
//    res = n << 1;                   // 값을 2진수로 바꾼 후 좌측으로 N bit 이동 후 출력
//    printf("res: %x\n", res);       // 위 경우 3c가 출력
//    res = res >> 1;                 // 값을 2진수로 바꾼 후 우측으로 N bit 이동 후 출력 (부호값에 따라서 맨 좌측값 채워짐)
//    printf("res: %x\n", res);       // 위 경우 1e가 출력
//
//    int n2 = 143;                   // 2진수 : 0b   1000 1111
//    res = n2 << 1;                  // 2진수 : 0b 1 0001 1110
//    printf("res: %x\n", res);       // 결과값: 11e
//    res = n2 >> 1;                  // 2진수 : 0b   1100 0111
//    printf("res: %x\n", res);       // 결과값: 47
//
//    return 0;
//}
//
//
///*
//int main()
//{
//    int a;
//    char ch;
//    scanf("%d", &a);
//    //scanf(" %c", &ch);    // 문자 1개 입력 시 " %c" 같이 맨 앞 띄어쓰기
//    getchar();              // 띄어쓰기 안 쓸경우
//    scanf("c", &ch);        // 문자 1개 입력 받기 전 getchar(); 함수 쓰기
//
//    return 0;
//}
//*/
