//////////////////////////////////////////////
//�ۼ���: �����(2113783)
//�ۼ���: 2023-04-20
//Lab6-1: �ֻ��� �������� ����Դ���
//////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
int get_dice_face()
{
    static int cnt=0;  //�Լ� ȣ�� Ƚ��
    static int a=0;  //1�� ���� Ƚ��
    static int b=0;  //2�� ���� Ƚ��
    static int c=0;  //3�� ���� Ƚ��
    static int d=0;  //4�� ���� Ƚ��
    static int e=0;  //5�� ���� Ƚ��
    static int f=0;  //6�� ���� Ƚ��
    cnt++;   
    int number=rand()%6+1;  //��������
    switch(number)
    {
        case 1:
            a++;
            break;
        case 2:
            b++;
            break;
        case 3:
            c++;
            break;
        case 4:
            d++;
            break;
        case 5:
            e++;
            break;
        case 6:
            f++;
            break;
    }
    if (cnt==100)  //ȣ��Ƚ���� 100�϶� ���
    {
        printf("1->%d\n",a);
        printf("2->%d\n",b);
        printf("3->%d\n",c);
        printf("4->%d\n",d);
        printf("5->%d\n",e);
        printf("6->%d\n",f);
    }
}
int main()
{
    for (int i=0;i<100;i++)
        get_dice_face();
}