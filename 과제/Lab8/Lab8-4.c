//////////////////////////////////////////////
//�ۼ���: �����(2113783)
//�ۼ���: 2023-05-04
//Lab8-4: �迭������ �ּڰ��� �ε��� ã��
//////////////////////////////////////////////
#include <stdio.h>
int main()
{
    double a[]={8.2,7.3,1.5,3.7,4.5,3.9,9.2};
    double *p=a;
    double min=*p;
    int index;
    for (int i=0;i<sizeof(a)/sizeof(a[0]);i++)
        if (*(p+i)<min)
            min=*(p+i),index=i;  //�����ͷ� min�� ã��,min �ε��� ����

    printf("�ּڰ��� ÷�ڴ� %d, ���� %.1lf\n",index,min);
}