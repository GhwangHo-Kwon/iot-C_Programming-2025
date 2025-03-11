///* 배열
//   동일한 자료형을 연속적으로 저장할 수 있는 공간
//*/
//#include <stdio.h>
//
//int main()
//{
//	char str[10] = "banana";			// 문자타입 배열선언
//
//	printf("str: %s\n", str);
//	printf("str[0]: %c\n", str[0]);
//	printf("str[1]: %c\n", str[1]);
//	printf("str[5]: %c\n", str[5]);
//	printf("str[6]: %c\n", str[6]);
//	//printf("str[6]: %s\n", str[6]);		// 문자열 끝에는 null이 온다.
//
//	//char str2[5] = "apple";			// 문자열 끝에 null이 올 공간을 확보!
//	char str2[6] = "apple";				// 따라서 크기를 문자수 +1 을 해줌
//	printf("str2: %s\n", str2);
//	str2[0] = 'A';
//	printf("str2: %s\n", str2);
//
//	//str = str2;
//	
//
//	return 0;
//}
//
///* 
//   변수 이름은 주소가 아님!
//   배열의 이름은 배열의 시작주소
//   배열을 제어하기 위해선 for문을 써야함
//*/