//////////////////////////////////////////////
//�ۼ���: �����(2113783)
//�ۼ���: 2023-05-25
//Lab11-2: �����ͺ����� �迭 copy�ϴ� �Լ������
//////////////////////////////////////////////
#include <stdio.h>
double copyarray(double *source,double *target,int size){
    for(int i=0;i<size;i++)
        *(target+i)=*(source+i);  //�����ͺ����� �迭 ����
}
int main(){
    double ary[5]={3.12,5.14,7.25,7.48,5.91};
    double target[5];
    printf("�� ��İ� :\n");
    for (int i=0;i<5;i++)
        printf("    %.2lf",ary[i]);
    printf("\n");
    copyarray(ary,target,5);  //�迭��, ���� ����
    printf("�Լ� copyarray()ȣ���� target �迭��:\n");
    for (int i=0;i<5;i++)
        printf("    %.2lf",target[i]);
    printf("\n");
}