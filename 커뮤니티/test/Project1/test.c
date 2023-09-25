#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
int main()
{
    FILE* fp1;
    FILE* fp2;
    char file1[100], file2[200];//,buffer[100];
    char c;
    printf("첫번째 파일 이름: ");
    scanf("%s", file1);
    printf("두번째 파일 이름: ");
    scanf("%s", file2);

    fp1 = fopen(file1, "r");
    if (fp1 == NULL)
        printf("no1\n");
    fp2 = fopen(file2, "w");
    if (fp2 == NULL)
        printf("no2\n");

    while ((c = fgetc(fp1) != EOF))
    {
        printf("ok");
        //fputc(c,fp2);
    }

    fclose(fp1);
    fclose(fp2);
    // fp2=fopen(file2,"r");
    // while(fgets(buffer,100,fp2)!=NULL){
    //     printf("%s",buffer);
    // }
    // fclose(fp2);
}