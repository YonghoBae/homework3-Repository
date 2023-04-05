 #include <stdio.h> //stdio.h헤더파일 포함

 #define MAX_SIZE 100 //MAX_SIZE를 100으로 정의

float sum1(float list[], int); // float형 함수 sum1 선언(매개변수 float형 배열 list, int형)
float sum2(float *list, int); // float형 함수 sum2 선언(매개변수 float형 포인터 list, int형)
float sum3(int n, float *list); // float형 함수 sum3 선언(매개변수 int형, float형 포인터 list)

float input[MAX_SIZE], answer; //전역변수 float형 input 배열, 변수 선언
int i; //전연변수 int형 i 선언
int main(void){
    for(i=0; i < MAX_SIZE; i++)
        input[i] = i; // 배열 input에 순서대로 0~99까지 대입

        printf("[----- [Yongho Bae] [2020039008] -----]\n");
        printf("--------------------------------------\n");
        printf(" sum1(input, MAX_SIZE) \n");
        printf("--------------------------------------\n");
        printf("input \t= %p\n", input); //input 시작주소 출력
        answer = sum1(input, MAX_SIZE); // input(주소참조), MAX_SIZE를 매개변수로 sum1실행 후 리턴값 answer에 대입
        printf("The sum is: %f\n\n", answer); //answer 출력
        printf("--------------------------------------\n");
        printf(" sum2(input, MAX_SIZE) \n");
        printf("--------------------------------------\n");
        printf("input \t= %p\n", input); //input 시작주소 출력

        answer = sum2(input, MAX_SIZE); // input(주소참조), MAX_SIZE를 매개변수로 sum2실행 후 리턴값 answer에 대입
        printf("The sum is: %f\n\n", answer); //answer 출력
        printf("--------------------------------------\n");
        printf(" sum3(MAX_SIZE, input) \n");
        printf("--------------------------------------\n");
        printf("input \t= %p\n", input); //input 시작주소 출력

        answer = sum3(MAX_SIZE, input); // input(주소참조), MAX_SIZE를 매개변수로 sum23행 후 리턴값 answer에 대입
        printf("The sum is: %f\n\n", answer); //answer 출력
}

float sum1(float list[], int n){
    printf("list\t= %p\n", list); // list 시작 주소출력
    printf("&list\t= %p\n\n", &list); // list 시작 주소출력
    int i; // int형 변수 i 선언
    float tempsum = 0; // float형 변수 tempsum 선언 및 초기화
    for(i=0;i<n;i++)
        tempsum += list[i]; //list에 있는 값의 총합 tempsum에 대입
    return tempsum; //tempsum 리턴 
}

float sum2(float *list, int n){
    printf("list\t= %p\n", list); // list가 가리키는 주소출력
    printf("&list\t= %p\n\n", &list); // list의 주소출력
    float tempsum = 0; // float형 변수 tempsum 선언 및 초기화
    for(i=0;i<n;i++)
        tempsum += *(list+i); //list+i가 가리키는 메모리 안의 값의 총합 tempsum에 대입
    return tempsum; //tempsum 리턴
}

float sum3(int n, float *list){
    printf("list\t= %p\n", list); // list가 가리키는 주소출력
    printf("&list\t= %p\n\n", &list); // list의 주소출력(sum2와 sum3의 list주소가 다른 이유는 매개변수선언 순서가 달라서 메모리배치가 달라지기때문이다.)

    int i; // int형 변수 i 선언
    float tempsum = 0; // float형 변수 tempsum 선언 및 초기화
    for(i=0;i<n;i++)
        tempsum += *(list+i); //list+i가 가리키는 메모리 안의 값의 총합 tempsum에 대입
    return tempsum; //tempsum 리턴
}

