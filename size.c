#include<stdio.h> //stdio.h헤더파일 포함
#include<stdlib.h> //stdlib.h헤더파일 포함
int main(void)
{
    int **x; //int형 이중포인터 x 선언
    printf("[----- [Yongho Bae] [2020039008] -----]\n");
    printf("sizeof(x) = %lu\n", sizeof(x)); //포인터를 가리키는 포인터이기때문에 8바이트출력
    printf("sizeof(*x) = %lu\n", sizeof(*x)); //int형 변수를 가리키는 포인터이기때문에 8바이트출력
    printf("sizeof(**x) = %lu\n", sizeof(**x)); //int형 변수 참조이기때문에 4바이트 출력
}