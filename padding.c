#include <stdio.h> //stdio.h헤더파일 포함
struct student {
    char lastName[13]; // 13바이트이므로 16바이트로 패딩
    int studentId; // 4바이트
    short grade; // 2바이트이므로 4바이트로 패딩
};//구조체 student 선언

int main(){
    struct student pst; //구조체 student 변수 pst 선언
    printf("[----- [Yongho Bae] [2020039008] -----]\n");
    printf("size of student = %ld\n", sizeof(struct student)); //16+4+4 = 24바이트 출력
    printf("size of int = %ld\n", sizeof(int)); // 4바이트 출력
    printf("size of short = %ld\n", sizeof(short)); //2바이트 출력
    return 0; // 0리턴
}