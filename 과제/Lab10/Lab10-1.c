//////////////////////////////////////////////
//�ۼ���: �����(2113783)
//�ۼ���: 2023-05-18
//Lab10-1: ������� ����ü �����
//////////////////////////////////////////////
#include <stdio.h>
struct account{    //������� ����ü
    int number;
    char name[20];
    int balance;
};
int main(){
    struct account a={1,"ȫ�浿",100000};
    printf("{ %d, %s, %d }\n",a.number,a.name,a.balance);
    //"."���� ����ü �׸� ����
}