//////////////////////////////////////////////
//�ۼ���: �����(2113783)
//�ۼ���: 2023-04-06
//Lab5-4: �ŵ������� ����ϱ�
//////////////////////////////////////////////
#include <stdio.h>
int main()
{
    double result=1.0;
    double r;
    int n;

    printf("�Ǽ��� ���� �Է��Ͻÿ�: ");
    scanf("%lf",&r);
    printf("�ŵ�����Ƚ���� �Է��Ͻÿ�: ");
    scanf("%d",&n);

    for (int i=0;i<n;i++)  //n��ŭ ���� �ݺ�
        result*=r;
    printf("������� %lf\n",result);
}