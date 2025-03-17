//#include <stdio.h>
//
//struct profile {
//    int age;
//    double height;
//    double weight;
//};
//struct student {
//    struct profile pf;          // 구조체 안에 구조체 호출(불러오기) 가능
//    int id;
//    double grade;
//};
//
//int main()
//{
//    struct student s;           // 구조체 변수의 선언, 초기화
//    s.grade = 99.0;
//    s.id = 201212;
//    s.pf.age = 30;
//    s.pf.height = 170.1;
//    s.pf.weight = 65.4;
//
//    printf("키: %.1lf\n", s.pf.height);
//    printf("몸무게: %.1lf\n", s.pf.weight);
//    printf("");
//
//    return 0;
//}
