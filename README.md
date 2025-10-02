# 김성미
### 202330203

## 10-02 강의

배열 요소를 역순으로 정렬

기수(진수) 변환

## 소수(prime number)
* 자신과 1 이외의 정수로 나누어 떨어지지 않는 정수
* 나누어 떨어지는 정수가 하나 이상 존재하면 그 수는 합성수(composite number)

## 다차원 배열
* 배열을 요소로 하는 배열
    * 배열을 자료형으로 하면 2차원 배열이고, 2차원 배열을 자료형으로 하면 3차원 배열
* 1차원 배열 : 지금까지 배운 '단일 자료형을 가지는 배열'
* 2차원 배열의 도출
    * [a] int형 ... int 자료형
    * [b] int[3]형 ... int를 자료형으로 하는 단일 요소가 3개인 배열
    * [c] int[4][3]형 ... int를 자료형을 하는 단일 요소가 3개인 배열을 자료형으로 하는 요소 개수가 4개인 배열

---
날짜를 계산하는 프로그램

# 구조체
* 구조체(structure) : 임의의 자료형의 요소를 조합하여 다시 만든 자료구조
* 구조체형과 멤버의 접근
    * [1] 구조체 선언
        * 구조체에 붙는 이름인 xyz를 구조체 태그(structure tag)라고 함
        * 구조체를 구성하는 요소를 구조체 멤버(structure member)라고 함
    * [2] 구조체형을 갖는 객체 a를 정의
        * struct xyz형을 갖는 객체 a를 정의
        * 구조체의 객체 안 멤버는 . 연산자를 사용하여 접근
    * [3] 포인터가 객체를 가리키도록 선언
        * p가 구조체형 객체에 대한 포인터일 때 p가 가리키는 객체의 멤버 x에 접근하는 형식은 -> 연산자를 사용 함

## 구조체 동의어 정의
* 구조체는 태그 이름 xyz만을 구조체 자료형의 이름으로 지정할 수 없음
* 구조체 자료형의 이름은 struct xyz처럼 두 단어로 구성해야 함
* typedef 선언을 사용해 짧은 이름으로 다시 만들어 사용할 수 있음
* 이제 하나의 단어 XYZ만으로 구조체 자료형의 이름을 나타낼 수 있음
* 이렇게 하면 변수 a와 포인터 p를 간단하게 선언하고 정의할 수 있음

### ![구조체 1](/img/구조체1.png "구조체1")


---


## 09-25 강의

# 배열

## 자료구조(data structure)의 정의
* 데이터 단위와 데이터 자체 사이의 물리적 또는 논리적인 관계

* 데이터 단위란?
    * 데이터를 구성하는 하나의 덩어리
    * 자료구조 : 자료를 효율적으로 사용할 수 있도록 컴퓨터에 저장하는 방법

## 배열(array)
* 배열은 **같은 자료형의 변수로 이루어진 요소(element)가 모여** 직선 모양으로 줄지어 있는 **자료구조**
* 네모 칸 안에 쓰인 숫자나 문자가 **요소 값**이고, 네모 칸의 왼쪽 또는 위쪽에 쓰인 작은 숫자가 **인덱스 값(index)**
###
### ![배열 1](/img/배열1.png "배열1")
* 그림 a처럼 요소를 **세로**로 정렬할 때는 인덱스가 작은 값을 **위쪽**에 오도록 함
* 그림 b처럼 요소를 **가로**로 정렬할 때는 인덱스가 작은 값을 **왼쪽**에 오도록 함
### ![배열 2](/img/배열2.png "배열2")

## 자료형 배열 이름[요소 개수]
* 배열의 선언
* 요소 개수는 **상수만 사용할 수 있음**
* 반드시 상수를 선언한 후에 사용하라는 의미X
* 일반적으로 배열을 선언할 때 대괄호 안에 숫자를 넣어 사용 → [5]

## 배열 이름[인덱스]
* 배열의 **개별 요소에 접근할 때 인덱스 식**(subscript expression)을 사용
* **첫 번째 배열 요소의 인덱스는 0**으로 정해져 있음
* 요소가 **n개인 배열**의 요소는 처음부터 순서대로 **a[0], a[1], ..., a[n - 1]로 접근**할 수 있음

## 변수 이름
* 임시로 사용할 변수는 메타변수를 사용(의미X)
* foo, bar, foobar, ...

## sizeof(배열명) / sizeof(자료형)
* 자료형에는 int, char, double 등을 사용.

## int[5]형 배열(자료형이 int형이고 요소가 3개)에 값을 입력해 출력
```c
#include <stdio.h>

int main()
{
    int foo[3];                     // 배열의 선언
    for (int i = 0; i < 3; i++) {   // 각 요소에 값을 입력
        printf("foo[%d] : ", i);
        scanf("&d", &foo[i]);
    }
    puts("각 요소의 값");
    for (int i =0; i < 3; i++) {    // 각 요소의 값을 출력
        printf("foo[%d] = %d\n", i, foo[i]);
    }

    return 0;
}
```
## int형 배열을 초기화하고 출력
```c
#include <stdio.h>

int main(void)
{
    int foo[5] = {1, 2, 3, 4, 5};
    int fooSize = sizeof(foo) / sizeof(foo[0]); // 요소의 개수
    printf("배열 a의 요소 개수는 %d입니다.\n", fooSize);

    for (int i = 0; i < fooSize; i++)
        printf("foo[%d] = %d\n", i, foo[i]);
        
        
    return 0;
}
```

## 메모리 할당과 동적 객체 생성하기
* 메모리 할당 : calloc, malloc 함수는 힙(heap)이라는 특별한 '빈 공간(free space)'에 기억 장소를 확보
    * calloc(clear and allocation) : 메모리를 할당하고 0으로 초기화.
    * malloc(memory allocation) : 메모리를 할당만 하고 초기화 하지 않음(가비지)
    * heap : 완전 이진 트리의 한 종류로 최대힙과 최소힙이 있음.

## 메모리 해제
* 확보한 **메모리가 불필요**하면 그 **공간을 해제**해야 하는데 이를 위해 제공되는 함수가 **free 함수**
* free 함수를 사용하면 프로그램을 실행하는 도중에도 원하는 시점에 **변수를 생성**하거나 제거할 수 있음
* free( ) 함수는 동적으로 할당된 메모리를 해제하는 역할을 함.
* calloc, malloc, free 함수를 사용하려면 stdlib.h를 include 해야 함.

## free 함수
* 헤더 : #include <stdlib.h>
* 형식 : void free(void *ptr);
* 반환값 : 없음

## int형 객체를 동적으로 생성하고 해제
```c
#include <stdio.h>
#include <stdlib.h>

int main(void){
int *x = calloc(1, sizeof(int));
    if (x == NULL)
        puts("메모리 할당에 실패했습니다.");
    else{
        *x =57;
        printf("*x= %d\n", *x);
        free(x);
    }

    return 0;
}
```

## 스택 메모리
* 스택(stack) 메모리는 자료구조의 스택(FIF0)과는 다름
    * 스택 메모리는 메모리 관리 방식이지 메모리 접근 방식이 아님.
    * 그렇기 때문에 FIF0를 따르는 것이 아닌, index를 통해 입출력 함.

## int형 배열을 동적으로 생성하고 해제
```c
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int el_num;
    printf("요소 개수 : ");
    scanf("%d", &el_num);
    int* foo = calloc(el_num, sizeof(int));

    if (foo == NULL)
        puts("메모리 확보에 실패했습니다.");
    else {
        printf("초기화 상태 확인.\n");
        for (int i = 0; i < el_num; i++) {
            printf("foo[%d] = %d\n", i, foo[i]);
        }
        printf("%d개의 정수를 입력하세요. \n", el_num);
        for (int i = 0; i < el_num; i++){
            printf("foo[%d] : ", i);
            scanf("%d", &foo[i]);
        }
        printf("각 요솟값은 아래와 같습니다.\n");
        for (int i = 0; i < el_num; i++)
            printf("foo[%d] = %d\n", i, foo[i]);
        free(foo);
    }

    return 0;
}
```

## 배열 요소의 최댓값 구하기
* 주사(traverse) : 배열의 요소를 하나씩 차레로 살펴보는 과정

```c
// 배열 요소의 최대 값을 구하고 출력(요소 값 입력)
#include <stdio.h>
#include <stdlib.h>

/*--- 요소 개수가 n 인 배열 a의 요소의 최댓값 ---*/
int maxof(const int foo[], int elem_cnt) {
    int max = foo[0];             // 최댓값
    for (int i = 1; i < elem_cnt; i++) {
        if (foo[i] > max) max = foo[i];
    }
    return max;
}

int main(void)
{
    int number;                 // 인원 = 배열 height의 요소 개수
    printf("사람 수: ");
    scanf("%d", &number);
    int *height = calloc(number, sizeof(int));  //요소 개수 number개인 배열을 생성
    printf("%d명의 키를 입력하세요.\n", number);
    for (int i = 0; i < number; i++) {
        printf("height[%d] : ", i);
        scanf("%d", &height[i]);
    }
    printf("최댓값은 %d입니다.\n", maxof(height, number));
    free(height);                               // 배열 height를 해제

    return 0;
}
```


---



## 09-18 강의

# 양수 음수 구분
```c
    // 입력받은 정숫값의 부호(양수/음수/0)를 판단
    #include<stdio.h>

    int main(void)
    {
        int n;

        printf("정수: ");
        scanf("%d", &n);

        if(n > 0)
            printf("양수입니다.\n");
        else if(n < 0)
            printf("음수입니다.\n");
        else
            printf("0입니다.\n");

        return 0;
    }
```
## 조건 연산자
* 3항 연산자 중에서 ?(물음표)를 **조건 연산자**라 함.
* 일반적으로 물음표의 앞 부분을 **조건절**이라 부름.
```c
    min = x < y ? x: y;
```
* 이 구문은 x가 y보다 작으면 x를, 그렇지 않으면 y를 min에 저장하라는 의미.

# 반복
* 반복 구조(repetition strucrure) 또는 루프(loop):
    * 어떤 조건이 성립하는 동안 처리(프로그램 명령문 또는 명령어의 집합)를 반복해 실행하는 것.
* While(제어식) 명령문
    : 반복의 대상이 되는 '명령문'을 문법적으로는 '루프 본문'이라 함
* 사전 판단 반복
    * 실행 전에 계속 반복할지를 판단.
    * 제어식의 평가 값이 0(false)이 아니면 프로그램 명령문을 반복.

## 1부터 n까지의 총합 구하기
```c
#include<stdio.h>

int main(void)
{
    int n;

    puts("1부터 n까지의 총합을 구합니다.");

    printf("n값: ");
    scanf("%d", &n);

    int sum = 0; // 총합
    int i = 1;
    int sum2 = 0;
    int sum3 = 0;

    while (i <= n)
    {               // i가 n 이하이면 반복
        sum += i;   // sum에 i를 추가
        i++;        // i값을 1증가
    }

    for (int j = 1; j <= n; j++)
    {
        sum2 += j;
    }

    // 가우스의 덧셈 알고리즘
    sum3 = n * (n + 1) / 2;
    printf("가우스의 덧셈 알고리즘으로 구한 1부터 %d까지의 총합은 %d입니다.\n", n, sum3);
    
    printf("while-1부터 %d까지의 총합은 %d입니다.\n", n, sum);
    printf("for-1부터 %d까지의 총합은 %d입니다.\n", n, sum2);

    return 0;
}
```
* while문은 언제 종료 될지 알 수 없는 반복문을 실행할 때 사용.
* for문은 종료 시점이 명확한 반복문을 실행할 때 사용.

## 다중 루프
* 반복 안에서 다시 반복할 수 있음
* 이런 반복을 루프가 중첩되는 수준에 따라 '이중 루프, 삼중 루프' 라고 함.

## 곱셈표
```c
#include <stdio.h>

int main(void)
{
    printf("----- 곱셈표 -----\n");

    for (int i =1; i <=9; i++)
    {
        for (int j = 1; j <= 9; j++)
            printf("%d X %d = %3d", i, j, i * j);
        putchar('\n');
    }

    return 0;
}
```
## 삼각형
```c
#include <stdio.h>

int main(void)
{
    int n;

    printf("몇 단 삼각형입니까?: ");
    scanf("%d", &n);

    //이등변 삼각형
    for (int i =1; i <= n; i++)
    {
        for (int j =1; j <= i; j++)
            putchar('*');
        putchar('\n');
    }

    // 삼각형
    for (int i = 0; i < n; i++)
    {
        for (int j = n-1; j > i; j--)
            putchar(' ');
        for (int j = 0; j < 2*i+1; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}
```


---


## 09-11 강의

[chocolatey 설치 링크](https://chocolatey.org/install "chocolatey")

# 알고리즘
* 매개변수(Parameta) : 함수를 정의할 때 함수에 전달받은 값을 저장하는 변수.
* 인수(Argument) : 함수를 사용할 때 함수의 매개변수로 전달할 값.
* 함수를 호출하는 곳에서 argument를 함수에 전달하면, 함수는 전달받은 인수를 이용해서 함수를 실행한 후 return문으로 결과 값을 호출한 곳으로 보냄.
* return 값의 자료형이 void인 경우 값을 반환하지 않음.

## 알고리즘의 정의
어떤 문제를 해결하기 위한 절차로, 명확하게 정의되고 순서가 있는 유한 개의 규칙으로 이루어진 집합

- 올바른 알고리즘이란
    * '어떠한 경우에도 실행 결과가 똑같이 나오는 것'을 의미.
    * 만약 알고리즘의 실행 결과가 어떤 경우에는 맞고 어떤 경우에는 틀리면 올바른 알고리즘이라고 할 수 없음

# Hello World
* "hello world"를 출력하는 c프로그램.
    ```c
        #include <stdio.h>

        int main () {
            printf("hello world\n");
            return 0;
        }
    ```
* 터미널을 열고 명령 실행
    ```c
        $ gcc -o hello hello.c
    ```
* 명령 실행시 hello.exe 파일이 생성.
* 생성된 실행 파일을 다음과 같이 호출
    ```c
        $ ./hello
        PS> .hello
        >hello
    ```
* 오류가 나는 경우 VSCode 재실행

### 한글깨짐시
* VSCode 오른쪽 밑 UTF-8 클릭 후 인코딩하여 다시 열기 클릭. 본문이 깨졌을 땐 Ctrl + Z를 눌러주면 한글이 다시 돌아오고, 그 상태에서 저장 후 다시 컴파일 후 실행.

## 순서도(flowchart)
- 문제에 대한 정의, 분석, 해법을 그림으로 표현하는 방법.
- 프로그램 순서도(program flowchart)에서 사용되는 기호:
    * 실제로 수행하는 연산을 나타내는 기호
    * 제어의 흐름을 나타내는 기호
    * 프로그램 순서도를 이해하고 작성하는데 편의를 부여하는 특수 기호


---


## 09-04 강의

[문자 크기](#h1에-해당) / [리스트](#)

# h1에 해당
## h2에 해당
### h3에 해당
#### h4에 해당
##### h5에 해당
###### h6에 해당

*이텔릭체*  
**볼드체**

---

# 리스트
* 언오디드 리스트
- 언오디드 리스트
    * 탭
        * 탭탭
            * 변화 없음


1. 오더드 리스트
2. 오더2

# 코드 블럭
```c
    #include <stdio.h>

    int main()
    {
        printf("Hello, world!\n");
        return 0;
    }
```

인라인 코드 블럭 예 : `<br>` 다른 예 : `ctrl`+`A`

# 외부링크
[구글로 가기](http://google.com "구글 링크")

![이미지](/img/images.png "이미지 삽입")