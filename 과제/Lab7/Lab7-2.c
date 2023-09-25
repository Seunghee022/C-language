//////////////////////////////////////////////
//작성자: 백승희(2113783)
//작성일: 2023-04-27
//Lab7-2: 2개의 정수 받아서 복사하는 함수만들기
//////////////////////////////////////////////
#include <stdio.h>
int array_copy(int a[],int b[]){
    for(int i=0;i<2;i++)
        b[i]=a[i];  //a를 b로 복사
}
int main(){
    int a[10]={1,2};
    int b[10]={0};

    array_copy(a,b);
    for (int i=0;i<2;i++)
        printf("%d ",a[i]); //a출력
    printf("\n");
    for (int i=0;i<2;i++)
        printf("%d ",b[i]);  //b출력
    printf("\n");
}