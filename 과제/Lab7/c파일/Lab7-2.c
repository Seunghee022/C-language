//////////////////////////////////////////////
//�ۼ���: �����(2113783)
//�ۼ���: 2023-04-27
//Lab7-2: 2���� ���� �޾Ƽ� �����ϴ� �Լ������
//////////////////////////////////////////////
#include <stdio.h>
int array_copy(int a[],int b[]){
    for(int i=0;i<2;i++)
        b[i]=a[i];  //a�� b�� ����
}
int main(){
    int a[10]={1,2};
    int b[10]={0};

    array_copy(a,b);
    for (int i=0;i<2;i++)
        printf("%d ",a[i]); //a���
    printf("\n");
    for (int i=0;i<2;i++)
        printf("%d ",b[i]);  //b���
    printf("\n");
}