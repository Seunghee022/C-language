//////////////////////////////////////////////
//�ۼ���: �����(2113783)
//�ۼ���: 2023-04-06
//Lab5-2: �޴��ְ� �������(���ѷ������)
//////////////////////////////////////////////
#include <stdio.h>
int main()
{
    char op;
    int x,y;
    printf("**********************\n");
    printf("A----Add\n");
    printf("S----Subtract\n");
    printf("M----Multiply\n");
    printf("D----Divide\n");
    printf("Q----Quit\n");
    printf("**********************\n");   
    do
    {
        printf("������ �����Ͻÿ�: ");  //op�ޱ�
        scanf(" %c",&op);
        if (op=='Q')   //Q�϶� ���ѷ��� ����������
            break;
        else if(op!='M'&&op!='A'&&op!='S'&&op!='D')  //�ٸ������϶� ��ӹݺ��ϱ�
            continue;
        else
        {
            printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�: ");
            scanf("%d %d",&x,&y);
            switch(op)    //switch������ �������
            {
                case 'M':
                    printf("%d\n",x*y);
                    break;
                case 'A':
                    printf("%d\n",x+y);
                    break;
                case 'S':
                    printf("%d\n",x-y);
                    break;
                case 'D':
                    printf("%d\n",x/y);
                    break;               
            }
            break;
        }
    } while (1);   
}