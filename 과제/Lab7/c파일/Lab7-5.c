//////////////////////////////////////////////
//작성자: 백승희(2113783)
//작성일: 2023-04-27
//Lab7-5: 2차원행렬 함수 작성
//////////////////////////////////////////////
#include <stdio.h>
int scalar_mult(int a[][3],int scalar){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            a[i][j]=a[i][j]*2; //원래값에 2배
            printf("%-2d\t",a[i][j]);  //2칸왼쪽정렬 출력
        }
        printf("\n");
    }         
}
int transpose(int a[][3],int b[][3]){
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            b[i][j]=a[j][i];  //예)[0][1]값이 [1][0]값이 됨
            printf("%-2d\t",b[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int c[3][3]={0};
    int matrix1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int matrix2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int matrix3[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    //matrix값이 바뀌어서 3개 생성

    scalar_mult(matrix2,2);  
    printf("\n");
    transpose(matrix1,matrix3);
}