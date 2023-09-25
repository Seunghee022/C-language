//////////////////////////////////////////////
//작성자: 백승희(2113783)
//작성일: 2023-06-01
//Lab12-1: 파일안의 문자를 모두 대문자로 변경 후 새파일에 저장
//////////////////////////////////////////////
#include <stdio.h>
#include <ctype.h>
int main()
{
    FILE *fp1,*fp2;
    char file1[100],file2[200];//,buffer[100];
    char c;
    printf("첫번째 파일 이름: ");
    scanf("%s",file1);
    printf("두번째 파일 이름: ");
    scanf("%s",file2);

    fp1=fopen(file1,"r");
    if(fp1==NULL)
        printf("no1\n");
    fp2=fopen(file2,"w");
    if(fp2==NULL)
        printf("no2\n");

    while((c=fgetc(fp1))!=EOF)
    {
        if(c==' ')
            fputc(c,fp2);
        else{
            c=toupper(c);
            fputc(c,fp2);
        }
    }
    fclose(fp1);
    fclose(fp2);
}