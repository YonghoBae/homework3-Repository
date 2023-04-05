#include <stdio.h>  //stdio.h헤더파일 포함
#include <string.h> //string.h헤더파일 포함

struct student1
{
    char lastName;
    int studentId;
    char grade;
}; // 구조체 student1 선언

typedef struct
{
    char lastName;
    int studentId;
    char grade;
} student2; // 타입정의 및 구조체 student2 선언

int main()
{
    struct student1 st1 = {'A', 100, 'A'}; // st1선언 및 각 요소에 A,100,A 대입

    printf("[----- [Yongho Bae] [2020039008] -----]\n");
    printf("st1.lastName = %c\n", st1.lastName);   // st1.lastName 출력
    printf("st1.studentId = %d\n", st1.studentId); // st1.studenId 출력
    printf("st1.grade = %c\n", st1.grade);         // st1.greade 출력

    student2 st2 = {'B', 200, 'B'}; // st2선언 및 각요소에 B,200,B 대입

    printf("\nst2.lastName = %c\n", st2.lastName); // st2.lastName 출력
    printf("st2.studentId = %d\n", st2.studentId); // st2.studenId 출력
    printf("st2.grade = %c\n", st2.grade);         // st2.grade 출력

    student2 st3; // st3 선언

    st3 = st2; // st3에 st2 대입

    printf("\nst3.lastName = %c\n", st3.lastName); // st3.lastName 출력
    printf("st3.studentId = %d\n", st3.studentId); // st3.studentId 출력
    printf("st3.grade = %c\n", st3.grade);         // st3.grade 출력
    printf("\n");

    if (st2.lastName != st3.lastName)
        printf("not equal\n");
    if (st2.studentId != st3.studentId)
        printf("not equal\n");
    if (st2.grade != st3.grade)
        printf("not equal\n"); // st2, st3각 요소 비교후 틀리면 not equal 출력
    else
        printf("equal\n"); // st2,st3가 모두 같으면 equal 출력
    return 0;              // 0리턴
}