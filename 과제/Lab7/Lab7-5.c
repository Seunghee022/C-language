//////////////////////////////////////////////
//�ۼ���: �����(2113783)
//�ۼ���: 2023-04-27
//Lab7-5: 2������� �Լ� �ۼ�
//////////////////////////////////////////////
#include <stdio.h>
int scalar_mult(int a[][3],int scalar){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            a[i][j]=a[i][j]*2; //�������� 2��
            printf("%-2d\t",a[i][j]);  //2ĭ�������� ���
        }
        printf("\n");
    }         
}
int transpose(int a[][3],int b[][3]){
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            b[i][j]=a[j][i];  //��)[0][1]���� [1][0]���� ��
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
    //matrix���� �ٲ� 3�� ����

    scalar_mult(matrix2,2);  
    printf("\n");
    transpose(matrix1,matrix3);
}