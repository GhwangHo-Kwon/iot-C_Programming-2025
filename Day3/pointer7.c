///*
//
//*/
//#include <stdio.h>
//
//void printAry(int *, int);
//int inputAry();
//
//int main()
//{
//    int ary[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int ary2[] = { 1, 2, 3 };
//
//    int size = sizeof(ary2) / sizeof(ary2[0]);
//    
//    inputAry();
//
//    printAry(ary2, size);
//
//    return 0;
//}
//
//void printAry(int *p, int _size)
//{
//    for (int i = 0; i < _size; i++) {
//        printf("ary[%d] = %d\n", i, p[i]);
//    }
//}
//
//int inputAry()
//{
//    int num;
//    int input[100] = { 0, };
//
//    printf("입력할 정수 갯수 입력 > ");
//    scanf_s("%d", &num);
//
//    for (int i = 0; i < num; i++) {
//        printf("정수 입력 > ");
//        scanf_s("%d", &input[i]);
//    }
//
//    return input;
//}
