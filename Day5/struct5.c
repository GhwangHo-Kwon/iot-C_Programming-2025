///*
//    
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////class vision {         // c++의 클래스
////    double left;       // c의 구조체와 모양이 비슷함
////    double right;
////
////    void move() {};
////}
//
//typedef struct vision {         // 구조체 선언
//    double left;
//    double right;
//
//} Vision;
//
//Vision exchange(Vision);            // 함수 원형
//
//int main()
//{
//    Vision rot;         // 구조체를 이용한 변수 초기화
//
//    printf("시력 입력>> ");
//    scanf("%lf %lf", &(rot.left), &(rot.right));
//
//    rot = exchange(rot);        // 함수호출
//
//    printf("바뀐 시력>> %.1lf %.1lf\n", rot.left, rot.right);
//
//    return 0;
//}
//
//Vision exchange(Vision rot)
//{
//    double temp;
//    temp = rot.left;
//    rot.left = rot.right;
//    rot.right = temp;
//    return rot;             // C는 return이 변수 1개 밖에 안되지만 구조체를 사용하면 억지로 2가지 이상을 반환할 수 있음
//}
