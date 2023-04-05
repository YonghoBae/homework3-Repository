#include <stdio.h> //stdio.h헤더파일 포함
#include <stdlib.h> //stdlib.h헤더파일 포함
int main(void) //main함수선언
{
    int list[5];  //int형 배열 list 선언
    int *plist[5]; //int형 포인터 변수 plist선언
    list[0] = 10; // list[0]에 10대입
    list[1] = 11; // list[1]에 11대입
    plist[0] = (int*)malloc(sizeof(int)); //plist[0]에 int형 동적메모리할당
    printf("[----- [Yongho Bae] [2020039008] -----]\n");
    printf("list[0] = %d\n", list[0]); //list[0] 출력
    printf("list[0] \t= %d\n", list[0]); //list[0] 출력
    printf("list \t\t= %p\n", list); //list 시작주소 출력
    printf("&list[0] \t= %p\n", &list[0]); //list[0]주소 출력
    printf("list + 0 \t= %p\n", list+0); //list[0]주소 출력
    printf("list + 1 \t= %p\n", list+1); //list[1]주소 출력
    printf("list + 2 \t= %p\n", list+2); //list[2]주소 출력
    printf("list + 3 \t= %p\n", list+3); //list[3]주소 출력
    printf("list + 4 \t= %p\n", list+4); //list[4]주소 출력
    printf("&list[4] \t= %p\n", &list[4]); //list[4]주소 출력
    free(plist[0]); //plist[0] 메모리 해제
}