#include <stdio.h>

void printMenu()
{
    printf("*******\n");
    printf("1.����\n");
    printf("2.����\n");
    printf("0.����\n");
    //�߰��޴�
    printf("*******\n");
}
int get_integer()
{
    int n;
    scanf("%d",&n);
    return n;
}
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int exec(int m,int a,int b)
{
    int rs;
    switch(m)
        {
            case 1:
                rs=add(a,b);
                break;
            case 2:
                rs=sub(a,b);
                break;
            default:
                printf("�߸��Է���\n");
        }
        return rs;
}