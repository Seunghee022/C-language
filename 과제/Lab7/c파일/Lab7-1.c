//////////////////////////////////////////////
//�ۼ���: �����(2113783)
//�ۼ���: 2023-04-27
//Lab7-1: �迭�� ���� ���� �� �ִ�,�ּڰ�
//////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n[10];
    int min,max;
    for (int i=0;i<10;i++)
        n[i]=rand();  //���� ����
    min=n[0];  //�ּҰ�,�ִ밪 ù��° ��ҷ�
    max=n[0];
    for (int i=1;i<10;i++)
    {
        if (n[i]<min)   //n[i]�� min���� ������ n[i]�� min
            min=n[i];
        if (n[i]>max)   //n[i]�� max���� ũ�� n[i]�� max
            max=n[i];
    }
    printf("�ִ��� %d\n",max);
    printf("�ּڰ��� %d\n",min);
}