#include <stdio.h>
#include "ex0413.h"

int main()
{
    int menu,x,y,rs;
    while(1)
    {
        printMenu();//�޴���� 
        printf("�޴��Է�: ");//�޴��Է�
        menu=get_integer();
        if (menu==0) break;
        
        //�ΰ��� ���� �Է�
        printf("����1 �Է�:");
        x=get_integer();
        printf("����2 �Է�:");
        y=get_integer();
        //���� (switch)
        rs=exec(menu,x,y);
        printf("%d\n",rs);
    }
    return 0;
}