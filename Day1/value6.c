///* 상수 */
//#include <stdio.h>
//
//int main()
//{
//	int r = 10;
//	const double pi = 3.14;		// const : 상수화 선언 (선언 이후 직접변경불가!)
//	double cf = 2 * pi * r;
//
//	//pi = 3.15;
//	double* dp = &pi;			// 포인터를 사용하면
//	*dp = 4.0;					// 상수화 된 변수를 다른 변수로 받아와서 변경 가능
//
//	printf("원둘레: %.2lf\n", cf);
//	printf("pi: %.lf", pi);
//
//	return 0;
//}