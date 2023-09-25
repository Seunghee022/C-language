//////////////////////////////////////////////
//작성자: 백승희(2113783)
//작성일: 2023-05-25
//Lab11-3: 파스칼의 삼각형 출력하기
//////////////////////////////////////////////
#include <stdio.h>
void pascaltriangle(int(*p)[10],int size){
    for(int j=0;j<size;j++){
        for(int k=0;k<=j;k++){
            if(k==0||k==j)  //행의 처음이거나 끝일때
                p[j][k]=1; 
            else   //처음과 끝이 아닐때
                p[j][k]=p[j-1][k]+p[j-1][k-1];
        }
    } 
}
void triangleprint(int (*p)[10],int size){
    for (int i=0;i<size;i++){
        for(int j=0;j<=i;j++)   //삼각형모양으로 나오도록 for문
            printf("%d  ",p[i][j]);
        printf("\n");
    }
}
int main(){
    int pascal[10][10];
    pascaltriangle(pascal,sizeof(pascal)/sizeof(pascal[0]));
    triangleprint(pascal,sizeof(pascal)/sizeof(pascal[0]));
}