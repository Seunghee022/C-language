//////////////////////////////////////////////
//�ۼ���: �����(2113783)
//�ۼ���: 2023-05-04
//Lab8-2: �迭�� ��Ҹ� ȭ�鿡 ���
//////////////////////////////////////////////
#include <stdio.h>
void array_print(int *A,int n);
int main()
{
    int A[5]={1,2,3,4,5};
    array_print(A,sizeof(A)/sizeof(A[0])); //sizeof�Լ��� ���� ����
}
void array_print(int *A,int n)
{
    int i;
    printf("A[]={ ");
    for(i=0;i<n;i++)
        printf("%d ",*(A+i)); //�迭�� �����ͷ� ����
    printf("}\n");
}