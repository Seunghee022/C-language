#include <stdio.h>

void printMenu()
{
    printf("*******\n");
    printf("1.µ¡¼À\n");
    printf("2.»¬¼À\n");
    printf("0.Á¾·á\n");
    //Ãß°¡¸Ş´º
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
                printf("Àß¸øÀÔ·ÂÇÔ\n");
        }
        return rs;
}