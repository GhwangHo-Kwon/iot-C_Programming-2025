///*
//    void pointer - 
//*/
//#include <stdio.h>
//
//int main()
//{
//    int n = 10;
//    double db = 3.14;
//
//    //int pn = &n;
//    //double* pdb = &db;
//    void* p;
//
//    //(int*)p = &n;               // 대입연산자 기준으로 좌측에서는 형변환 X
//    p = &n;
//    printf("*p: %d\n", *(int*)p);         // void 타입에 정수형(%d)을 그냥 사용X, 자료형을 정확히 명시해야함
//
//    p = &db;
//    printf("*p: %.1lf\n", *(double*)p);
//
//    return 0;
//}
