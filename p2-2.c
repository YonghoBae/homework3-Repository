#include <stdio.h> //stdio.h헤더파일 참조

void print_one(int *ptr, int rows); // void형 함수 print_one 선언(매개변수 int형 포인터변수 ptr, int형 rows)

int main(){
    int one[] = {0, 1, 2, 3, 4}; //int형 배열 one 선언 및 순서대로 0~4대입
    
    printf("[----- [Yongho Bae] [2020039008] -----]\n");
    printf("one = %p\n", one); // one 시작주소 출력
    printf("&one = %p\n", &one); // one 시작주소출력
    printf("&one[0] = %p\n", &one[0]); // one[0]의 주소출력
    printf("\n");

    printf("------------------------------------\n");
    printf(" print_one(&one[0], 5) \n");
    printf("------------------------------------\n");
    print_one(&one[0], 5); //print_one 실행(매개변수 &one[0],5)

    printf("------------------------------------\n");
    printf(" print_one(one, 5) \n");
    printf("------------------------------------\n");
    print_one(one, 5); //print_one 실행(매개변수 one, 5)

    return 0;
}

void print_one(int *ptr, int rows){
    int i; //int형 변수 i선언
    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++)
        printf("%p \t %5d\n", ptr + i, *(ptr + i)); //ptr+i가 가리키는 주소 출력, ptr+i가 가리키는 주소 안의 값 출력
    printf("\n");
}