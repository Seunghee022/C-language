//////////////////////////////////////////////
//작성자: 백승희(2113783)
//작성일: 2023-05-25
//Lab11-2: 포인터변수로 배열 copy하는 함수만들기
//////////////////////////////////////////////
#include <stdio.h>
double copyarray(double *source,double *target,int size){
    for(int i=0;i<size;i++)
        *(target+i)=*(source+i);  //포인터변수로 배열 복사
}
int main(){
    double ary[5]={3.12,5.14,7.25,7.48,5.91};
    double target[5];
    printf("원 행렬값 :\n");
    for (int i=0;i<5;i++)
        printf("    %.2lf",ary[i]);
    printf("\n");
    copyarray(ary,target,5);  //배열과, 길이 전달
    printf("함수 copyarray()호출후 target 배열값:\n");
    for (int i=0;i<5;i++)
        printf("    %.2lf",target[i]);
    printf("\n");
}