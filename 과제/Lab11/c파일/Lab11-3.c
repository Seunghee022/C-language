//////////////////////////////////////////////
//�ۼ���: �����(2113783)
//�ۼ���: 2023-05-25
//Lab11-3: �Ľ�Į�� �ﰢ�� ����ϱ�
//////////////////////////////////////////////
#include <stdio.h>
void pascaltriangle(int(*p)[10],int size){
    for(int j=0;j<size;j++){
        for(int k=0;k<=j;k++){
            if(k==0||k==j)  //���� ó���̰ų� ���϶�
                p[j][k]=1; 
            else   //ó���� ���� �ƴҶ�
                p[j][k]=p[j-1][k]+p[j-1][k-1];
        }
    } 
}
void triangleprint(int (*p)[10],int size){
    for (int i=0;i<size;i++){
        for(int j=0;j<=i;j++)   //�ﰢ��������� �������� for��
            printf("%d  ",p[i][j]);
        printf("\n");
    }
}
int main(){
    int pascal[10][10];
    pascaltriangle(pascal,sizeof(pascal)/sizeof(pascal[0]));
    triangleprint(pascal,sizeof(pascal)/sizeof(pascal[0]));
}