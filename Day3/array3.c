/*

*/
//#include <stdio.h>
//
//int main()
//{
//    char str[100] = "banana";
//    char str2[6] = "apple";     // char 배열에 저장시 +1만큼의 방(인덱스)이 필요하다.
//    char str3[7] = { 'o', 'r', 'a', 'n', 'g', 'e' };
//    char str4[4];
//    str4[0] = 'a';
//    str4[1] = 'b';
//    str4[2] = 'c'; str4[3] = '\0';          // 문자하나하나 넣은경우 마지막에 null을 따로 넣어줘야함
//
//    printf("str: %s\n", str);
//    printf("str2: %s\n", str2);
//    printf("str3: %s\n", str3);
//    printf("str3[6]: %s\n", str3[6]);           // 배열의 마지막은 null로 채워짐
//    printf("str4: %s\n", str4);
//    printf("str 나머지 방: %s\n", str[10]);       // 나머지 방도 null로 채워짐
//
//    //str = str2;
//    strcpy(str, str2);          // 문자열 복사는 for문 사용 or strcpy(); 함수 사용
//    printf("str: %s\n", str);
//
//    strcpy(str, "dog");         // strcpy(); 함수 내에서 문자열을 바로 받을 수 있음
//    printf("str: %s\n", str);
//    
//    str[0] = 'D';
//    printf("str: %s\n", str);
//
//    return 0;
//}
