#include <stdio.h>  //stdio.h헤더파일 포함
#include <stdlib.h> //stdlib.h헤더파일 포함
int main(void)      // main함수선언
{
    int list[5]; // int형 배열 list 선언
    int *plist[5] = {
        NULL,
    };                                     // int형 포인터 변수 plist선언 및 초기화
    plist[0] = (int *)malloc(sizeof(int)); // plist[0]에 int형 동적메모리할당
    list[0] = 1;                           // list[0]에 1대입
    list[1] = 100;                         // list[1]에 100대입
    *plist[0] = 200;                       // plist[0]이 가리키는 메모리에 200대입
    printf("[----- [Yongho Bae] [2020039008] -----]\n");
    printf("list[0] = %d\n", list[0]);   // list[0]출력
    printf("&list[0] = %p\n", &list[0]); // list[0]의 주소출력
    printf("list = %p\n", list);         // list의 시작주소 출력
    printf("&list = %p\n", &list);       // list의 시작주소 출력
    printf("----------------------------------------\n\n");
    printf("list[1] = %d\n", list[1]);       // list[1]출력
    printf("&list[1] = %p\n", &list[1]);     // list[1]의 주소출력
    printf("*(list+1) = %d\n", *(list + 1)); // list[1]출력
    printf("list+1 = %p\n", list + 1);       // list[1]의 주소출력
    printf("----------------------------------------\n\n");
    printf("*plist[0] = %d\n", *plist[0]); // plist[0]가 가리키는 메모리에 저장된 값 출력
    printf("&plist[0] = %p\n", &plist[0]); // plist[0]의 주소출력
    printf("&plist = %p\n", &plist);       // plist의 시작주소 출력
    printf("plist = %p\n", plist);         // plist의 시작주소 출력
    printf("plist[0] = %p\n", plist[0]);   // pilst[0]가 가리키는 메모리주소 출력
    printf("plist[1] = %p\n", plist[1]);   // pilst[1]가 가리키는 메모리주소 출력
    printf("plist[2] = %p\n", plist[2]);   // pilst[2]가 가리키는 메모리주소 출력
    printf("plist[3] = %p\n", plist[3]);   // pilst[3]가 가리키는 메모리주소 출력
    printf("plist[4] = %p\n", plist[4]);   // pilst[4]가 가리키는 메모리주소 출력
    free(plist[0]);                        // plist[0] 메모리 해제
}