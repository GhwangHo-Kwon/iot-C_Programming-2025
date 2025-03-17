///*
//    struct(구조체) - 사용자 정의 자료형
//    기존 자료형을 묶어서 만든 복합 자료형(타입 = 크기)
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//struct Humman {             // 구조체 선언 struct 구조체명 (구조체 객체)
//    char name[100];         // 멤버변수
//    int age;                // 멤버변수
//};
//
//int main()
//{
//    /* . 멤버 접근연산자 */
//    struct Humman h;        // Humman 구조체의 변수 h 선언 / 구조체 변수 선언 후 이름(별명) 지정
//    h.age = 30;         // H객체의 멤버 age에 30을 저장.
//    //h.name = "hong kildong";          // 주소에 배열연산자 X / l_value: 변수가 와야함
//    strcpy(h.name, "hong kildong");     // 따라서 복사해서 붙여넣음
//
//
//    //char str[100] = "hong kildong";
//    //printf("%s\n", str);
//    //char str2[100];
//    //str2 = "kim chulsul";       // 주소에 배열연산자 X / l_value: 변수가 와야함
//    ///*
//    //str[0] = 'h';
//    //str[1] = 'o';
//    //...
//    //str2[10] = '\0';
//    //*/
//
//    printf("나의 이름은 %s이고, 나이는 %d입니다.\n", h.name, h.age);
//
//    return 0;
//}
