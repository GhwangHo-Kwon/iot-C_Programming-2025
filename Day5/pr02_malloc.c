//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    char str[100];              // 문자열 생성
//    char* ps[5] = {"", };       // 포인터 배열 생성 및 초기화
//
//    for (int i = 0; i < 5; i++) {
//        printf("문자열을 입력하세요>> ");
//        gets(str);          // 문자열 입력 받음
//
//        ps[i] = (char*)malloc(strlen(str) + 1);     // 포인터 배열의 [i]번째에 데이터 크기(방) 생성
//        if (ps[i] == NULL) {            // 만약 포인터 배열의 [i]번째가 NULL이면 종료
//            exit(1);
//        }
//
//        strcpy(ps[i], str);             // 문자열을 포인터 배열[i]번째에 복사 후 담음
//    }
//
//    for (int i = 0; i < 5; i++) {
//        printf("Heap %d: %s\n", i, ps[i]);      // 포인터 배열의 데이터 순차적으로 출력
//        free(ps[i]);                    // 순차적으로 소멸
//    }
//
//    return 0;
//}
