//////////////////////////////////////////////
//작성자: 백승희(2113783)
//작성일: 2023-05-04
//Lab8-2: 배열의 요소를 화면에 출력
//////////////////////////////////////////////
#include <stdio.h>
void array_print(int *A,int n);
int main()
{
    int A[5]={1,2,3,4,5};
    array_print(A,sizeof(A)/sizeof(A[0])); //sizeof함수로 길이 측정
}
void array_print(int *A,int n)
{
    int i;
    printf("A[]={ ");
    for(i=0;i<n;i++)
        printf("%d ",*(A+i)); //배열을 포인터로 접근
    printf("}\n");
}