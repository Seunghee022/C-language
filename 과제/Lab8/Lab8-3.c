//////////////////////////////////////////////
//작성자: 백승희(2113783)
//작성일: 2023-05-04
//Lab8-3: 정수 배열 복사하기
//////////////////////////////////////////////
#include <stdio.h>
void array_copy(int *A,int *B,int size);
int main(){
    int A[3]={1,2,3};
    int B[3];
    array_copy(A,B,sizeof(A)/sizeof(A[0]));
}
void array_copy(int *A,int *B,int size){
    int i;
    for (i=0;i<size;i++)
        *(B+i)=*(A+i);
    printf("A[]={ ");
    for(i=0;i<size;i++)
        printf("%d ",*(A+i));  //배열을 포인터로 접근
    printf("}\n");

    printf("B[]={ ");
    for(i=0;i<size;i++)
        printf("%d ",*(B+i));  //배열을 포인터로 접근
    printf("}\n");
}