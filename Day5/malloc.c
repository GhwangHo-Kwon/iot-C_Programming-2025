///*
//    메모리 동적 할당: malloc - free
//    calloc - 메모리를 동적 할당하여 0으로 초기화
//    realloc - 크기조절
//*/
//#include <stdio.h>
//#include <stdlib.h>             // 헤더파일 포함
//
//int main()
//{
//    int* pi = (int*)malloc(sizeof(int));       // 힙영역에 입력크기만큼 메모리 공간을 할당받은 후 시작주소를 리턴한다.
//    if (pi == NULL) {
//        printf("메모리 할당 실패\n");
//        exit(1);
//    }
//    printf("할당 성공!!\n");
//
//    free(pi);       // 힙영역의 메모리공간 사용이 다 끝나면 반환해주기
//
//    return 0;
//}
