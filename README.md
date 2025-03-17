# iot-C_Programming-2025
 IoT 개발자 C 프로그래밍

## 1일차

- C언어 시작시 기본 세팅
    ```c
    #include<stdio.h>   // 헤더파일 호출
    
    int main(void)	// void는 선택
    {
        // 프로그램 작성 시작!

        return 0;
    }
    ```
    - void : 빈 값을 의미함.
    - 주석 단축키
        - `ctrl + /`, `ctrl + k + c`
    
- 함수 : [C](./Day1/HelloWorld.c)

    - 함수 정의 시 함수명 앞에 쓴 자료형대로 출력(return)해야함.
        ```c
        int main(void)  // int로 선언했으면
        {
            return 0;   // 정수값으로 반환
        }
        ```
    1. 함수 선언 : 함수의 이름, 반환형, 매개변수 등을 미리 선언하여 컴파일러에게 알림.
    2. 함수 정의 : 함수의 동작을 실제로 구현.
    3. 함수 호출 : 정의된 함수의 기능을 실제로 사용하여 실행.

- 출력 : [C](./Day1/printf1.c) **(`printf1~4.c` 파일 참조)**
    - C언어에서 출력은 printf();함수로 출력함
        ```c
        printf("여기에 출력할 내용을 입력!");
        printf("%d", 10);       // 정수출력 방법 : ""안에 %d를 쓰고 정수값(정수형 변수) 입력
        printf("%lf", 3.14);    // 실수출력 방법 : ""안에 %lf를 쓰고 실수값(실수형 변수) 입력
        printf("%d", 0xc);      // 16진수 출력방법 : ""안에 %d를 쓰고 16진수값(16진수 변수) 입력
        printf("%c", 'a');      // 문자출력 방법 : ""안에 %c를 쓰되 ,뒤에는 ''안에 문자입력, 변수는 '' 없이 작성
        printf("%s", "홍길동")  // 문자열출력 방법 : ""안에 %s를 쓰되 ,뒤에는 ""안에 문자열 입력 / 변수는 ""없이 작성
        ```
    - 실수의 자릿수는 `%lf`에서 `%.(나타내고 싶은 자릿수)lf` 로 정할 수 있음.

- 진수
    - 2진수 : 0, 1
    - 8진수 : 0 ~ 7
    - 10진수 : 0 ~ 9
    - 16진수 : 10진수 + a(10) ~ f(15)

- 아스키 코드(ASCII)
    - A(대문자)는 10진수로 65 - A to Z까지 각각 1씩 증가
    - Z(대문자)는 10진수로 90
    - a(소문자)는 10진수로 97 - a to z까지 각각 1씩 증가
    - z(소문자)는 10진수로 122

- 입력 : [C_scanf1](./Day1/scanf.c), [C_scanf2](./Day1/scanf2.c)

    - scanf 사용시 '&' 주소연산자 사용 + "" 안에는 서식문자만 작성
    - _CRT_SECURE_NO_WARNINGS 에러시 맨윗줄에 `#define _CRT_SECURE_NO_WARNINGS` 작성
        ```c
        #define _CRT_SECURE_NO_WARNINGS
        #include <stdio.h>

        int n1, n2;
        scanf("%d", &n1, &n2);
        printf("%d, %d", n1, n2);
        ```
    - `#define _CRT_SECURE_NO_WARNINGS`을 안쓸거면 `scanf_s()` 함수 사용

    - 문자 1개 입력 시 `" %c"`같이 맨 앞 띄어쓰기
        ```c
        char ch;
        scanf(" %c", &ch);      // 1번째 방법

        getchar();              // 2번째 방법
        scanf("%c", &ch);
        ```
        - 띄어쓰기 안 쓸 경우 scanf작성 전 getchar(); 함수 사용!

- 변수 : [C](./Day1/value.c), ... [value2~6.c 파일 참조]
    - 변수란 `무언가를 저장할 수 있는 공간(값)`을 의미.
        - ROM : Read Only Memory
        - **RAM** : Random Access Memory
        
        - `정수(int[integer])`
        - 실수(float, double)
        - 문자(char)
        - 문자열(str)

    - sizeof() 함수 사용하면 자료형의 byte 크기를 알 수 있음.
        ```c
        printf("정수의 크기 : %d", sizeof(int));    // 정수형의 크기. 다른것도 이런식으로 알 수 있음.
        ```

    - 대입연산자 : '='
        - 대입 연산자의 오른쪽에 있는 값을 R_Value(변수), 왼쪽의 값을 L_Value(Literal(상수))

    - 단항연산자 : C('++', ...), python('+=', ...)

    - signed는 음수, 양수 범위 모두 포함
    - unsigned는 0부터 양수의 범위만 차지
    - signed char : -128 ~ 127 (127인 이유는 0이 포함되어 있기 때문. 허나 0은 음수도 양수도 아닌 0 그 자체)
    - unsigned char : 0 ~ 255
        ```c
        signed int num1;    // signed는 생략가능
        unsigned int num2;
        ```

    - 상수 : 수식에서 변하지 않는 값을 의미
        ```c
        int r = 10;
        const double pi = 3.14;     // 상수화 선언
        double cf = 2 * pi * r;

        pi = 3.15;          // 상수로 변경 불가
        double* dp = &pi;   // 포인터를 사용하면
        *dp = 4.0;          // 상수화된 변수를 다른 변수로 받아와서 변경가능
        ```
        - 변수에 const를 작성시 상수화 선언을 뜻함 (선언 이후 `직접변경불가!`)
            - 하지만 `포인터`를 사용하면 상수화된 변수를 다른 변수로 받아와서 변경가능!

- 배열 : 동일한 자료형을 연속적으로 저장할 수 있는 공간
    
    - 배열 선언시 문자열 끝에 `null이 올 공간`을 **확보**해야 문제가 안생김!
        ```c
        char str2[5] = "apple";			// 문자열 끝에 null이 올 공간을 확보!
        char str2[6] = "apple";			// 따라서 크기를 문자수 +1 을 해줌
        ```

    - 배열의 이름은 배열의 시작 주소를 나타냄
    - 배열을 제어하기 위해선 for문(반복문)을 써야함
        ```c
        int ary[5] = { 1, 2, 3, 4, 5 };
        
        ary[3] = 400;   // 선언한 배열의 위치를 지정하여 값을 변경할 수 있음!

        for (int i = 0; i < 5, i++) {
            printf("arr[%d]: %d\n", i, ary[i]);
        }

        /* 출력 : arr[0]: 1
                  arr[1]: 2
                  arr[2]: 3
                  arr[3]: 400
                  arr[4]: 5
        */
        ```

- 컴퓨터의 산수
    - 컴퓨터는 기본적으로 덧셈만 가능
    - 뺄셈은 보수의 개념으로 사용
        - 보수란 더해서 10이 되는 관계. 예: 2에 대한 10의 보수 = 8
    - 곱셈은 덧셈을 여러번 시행
    - 나눗셈은 뺄셈을 여러번 시행

## 2일차
- 연산자 : [C_oper](./Day2/oper.c), [C_oper2](./Day2/oper2.c)
    1. `A && B` : (AND 연산자)
        - 좌항과 우항 둘다 참일 경우 참(1) 출력
        - 단 1개의 항이라도 참이 아닐경우 거짓(0) 출력
    2. `A || B` : (OR 연산자)
        - 좌항과 우항 중 하나라도 참일경우 참(1) 출력
        - 모든 항이 거짓을 경우만 거짓(0) 출력
    3. `<=, <, >, >=` : (복합 대입연산자)
        - 좌항과 우항 값을 비교 후 참(1), 거짓(0) 출력
    4. `! + 복합대입연산자` : (부정 연산자)
        - 좌항과 우항 값을 비교 후 참(1), 거짓(0)을 뒤집어 출력
    5. `~` : (비트 연산자)
        - 값을 2진수로 바꾼 후 나온 0과 1의 값들을 뒤집어 출력
    6. `<<, >>` : (시프트 연산자), [C_shift](./Day2/shift.c)
        - 값을 2진수로 바꾼 후 좌측 or 우측으로 N bit 이동 후 출력
        - **좌측**으로 이동 시 `맨 우측값`은 **0**으로 채워짐
        - **우측**으로 이동 시 `맨 좌측값`은 **부호값**(**양수, 음수**)에 따라서 채워짐
        - 대입 연산자는 뒤에 와야함
    7. `(조건식) ? a : b` : (삼항연산자)
        - 조건에 따라 값을 선택하는 연산자
        ```c
        // 예시
        int a = 10, b = 20;
        int res;
        res = (a > b) ? a : b;      // res = 20
        ````
    8. `n++` : (후위연산자)
        - n값을 출력 후 1을 증가
    9. `++n` : (전위연산자)
        - 1을 증가 후 n값을 출력
    
- c언어에서 형변환 : [C](./Day2/casting.c)
    ```c
    // 예시
    int n = 10;
    double res;

    res = (double)n / 3;
    printf("res: %.lf\n", res);
    ```
    - 형변환하려는 변수 앞에 `(자료형)변수` 형태로 작성

- 제어문
    - 선택제어문
        1. if문 : [C](./Day2/if.c), [C](./Day2/if2.c)
            ```c
            if (조건식) {
                코드
            }
            else if (조건식) {
                코드
            }
            else {
                코드
            }
            ```
        2. switch문 : [C](./Day2/switch.c)
            ```c
            switch (조건문) {
                코드
                break;      // break를 지우면 다음 구문으로 넘어감
            case (조건문):
                코드
                break;
            default:
                코드
                break;
            }
            ```
    - 반복제어문
        1. for문 : [C](./Day2/for.c)
            - for(초기식; 조건식; 증감식;) {  }
            ```c
            for (int i = 0; i < 10; i++) {
                코드
            }
            ```
        2. while문 : [C](./Day2/while.c)
            - while(조건식) {  }
            - 조건식이 맞으면 종료함.
            ```c
            while(조건식) {
                코드
            }
            ```
        - break : 반복문을 완전히 빠져나옴
        - continue : 반복문을 1번 스킵함(보통 조건식과 같이씀)

- 함수
    1. 입력과 출력이 없는 함수 : [C](./Day2/func.c)
        - 함수 안에서 결과를 나타낸다.
        ```c
        void func() {
            코드
        }
        ```
    2. 입력이 있는 함수 : [C](./Day2/func2.c)
        - 실인수 : 함수 호출 부분의 인수
        ```c
        void func(int a, int b) {   // a, b는 매개변수
            코드
        }
        ```
    3. 입력과 출력이 있는 함수 : [C](./Day2/func3.c)
        ```c
        int func(int a, int b) {
            int res;
            코드
            return res;
        }
        ```
    4. 함수 원형 : [C](./Day2/func4.c)
        - 함수 원형을 선언하는 이유는 메인함수 밑에 함수 작성시 미리 선언하여 오류를 방지
        ```c
        int func(int, int);     // 함수선언 or 함수원형
        int main()
        {
            코드
        }
        int func(int a, int b) {
            코드
        }
        ```

## 3일차
- 배열 : [C](./Day3/array.c), [C](./Day3/array2.c), [C](./Day3/array3.c)
    - 동일한 자료형을 연속적으로 저장함, 인덱스 사용.
    - 배열의 시작주소는 배열의 첫번째 인덱스 주소와 같음 / [C](./Day3/array2.c)
    - 장점 : 접근이 용이함, 저장하기 쉬움
    - 단점 : 수정이 어려움

    - 배열 선언 : [C](./Day3/array.c)
        ```c
        int ary[5] = {1, 2, 3, 4, 5};   // 정수형 배열 선언.
        ```
    - 선언 방법 
        1. `int ary[5] = { 1, 2, 3, 4, 5};`
        2. `int ary[] = { 1, 2, 3, 4, 5 };`
    
    - 문자열 복사는 for문 사용 or strcpy(); 함수 사용
        - `strcpy(붙여넣을문자열, 복사할문자열);`
        - strcpy(); 함수 내에서 문자열을 바로 받을 수 있음
            - `strcpy(str, "바꿀문자");`

- 포인터 : [C](./Day3/pointer.c), [C](./Day3/pointer3.c)
    - 포인터란 주소를 뜻함
        - 주소의 크기는 컴퓨터 환경에 따라 다름.
        - 포인터변수의 크기는 타입에 상관없이 일정함. 주소의 크기는 일정하기 때문.
    - 포인터 변수 : 주소를 저장할 수 있는 변수
        - 포인터 변수는 어떠한 자료형이더라도 항상 4byte
    - 포인터 변수 선언시 자료형과 변수이름 사이에 `*`를 붙임
        - `int* p`, `int * p`, `int *p`
        - 선언시 `*`은 단순히 포인터 변수라는 뜻의 기호를 뜻함
        - 포인터 변수 호출 시 `*`는 간접참조 연산자를 뜻함
    - `포인터 크기는 주소 크기와 같다`

    - c에서 값을 바꾸는 방법 : [C](./Day3/pointer3.c), [C](./Day3/pointer5.c)
        ```c
        int a = 10, b = 20;
        printf("변경 전 - a : %d, b : %d\n", a, b);     // a = 10, b = 20
        int temp = a;       // 변경 시작
        a = b;
        b = temp;
        printf("변경 후 - a : %d, b : %d\n", a, b);     // a = 20, b = 20
        ```
    
    - 배열과 포인터 : [C](./Day3/pointer6.c)
    - Const(상수화) : [C](./Day3/pointer8.c)
        - 데이터 상수화
            - `const 자료형* 변수 = `
            - 포인터 변수를 통한 데이터의 변경 불허
        - 포인터 상수화
            - `자료형* const 변수 = `
            - 포인터 변수가 가르키는 주소의 변경 불허
        - 데이터 상수 + 포인터 상수
            - `const 자료형* const 변수 = `
            - 둘다 불허

- 문자 : [C](./Day3/char.c), [C](./Day3/char2.c)
    - `변수 = getchar();` : 한문자를 읽어오는 함수(숫자 출력) / 수신
    - `putchar(문자입력);` : 한문자를 출력하는 함수, 개행X / 송신
    - 대소문자 변환 : [C](./Day3/char3.c), [C](./Day3/pr02_convertStr.c)

## 4일차

## 5일차
<!--
main.c > voidpointer1,2.c > malloc1,2.c > struct1~5.c > stpointer.c > spointer.c >
stArray.c
-->
- main() : [C](./Day5/main.c)
    - main함수의 ()안에는 `int argc, char ** argv`가 들어있으나 평소 생략함.
    - `int argc, char ** argv` 포인터 배열 또는 이중포인터로 바꿀 수 있음
        - 예 - `* argv[]` or `** argv`

- 함수 포인터 : [C](./Day5/voidpointer.c), [C](./Day5/voidpointer2.c)
    - 함수이름(함수의 시작위치) 자체가 포인터(주소)
    ```c
    int sum(int, int);      // 원형 선언
    int main()
    {
        int (*fp)(int, int);        // 함수 포인터를 사용하려면 입출력 (자료형)형태가 같아야함.
        int res;
        fp = sum;               // 함수 포인터로 함수 호출
        res = fp(20, 10);
    }
    ```

    ```c
    //(int*)p = &n;     // 대입연산자 기준으로 좌측(l_value)에서는 형변환 안됨!
    void* p;
    printf("*p: %d\n", *(int*)p);       // void 타입에는 정수형(%d)을 그냥 사용X 자료형을 정확히 명시해야함
    ```

- 메모리 동적 할당 : [C](./Day5/malloc.c), [C](./Day5/malloc2.c)
    - malloc + free 함수 세트
        - `int* pi = (int*)malloc(sizeof(int));` - 힙영역에 입력크기만큼 메모리 공간을 할당받은 후 시작주소를 리턴
        - `free(pi)` - 힙영역의 메모리공간 사용이 다 끝나면 반환해주기
    - calloc : 메모리를 동적 할당하여 0으로 초기화
    - realloc : 크기조절
    - 배열 사용시 포인터 배열로 데이터를 생성해야함 - [C_practice](./Day5/pr02_malloc.c)

- 구조체(struct) : [C1](./Day5/struct.c), [C2](./Day5/struct2.c), ..., [C5](./Day5/struct5.c)
    - 사용자 정의 자료형 = 구조체, 공용체...
    - 기존 자료형을 묶어서 만든 복합자료형(타입 = 크기)
        ```c
        struct Humman {             // 구조체 선언 -> sturct 구조체명 { 구조체 객체 }
            char name[100];         // 멤버변수
            int age;                // 멤버변수
        };  // 끝에 ; 필수!
        ```