//////////////////////////////////////////////
//작성자: 백승희(2113783)
//작성일: 2023-06-01
//Lab12-2: 학생의 점수의 합 구해서 파일에 저장
//////////////////////////////////////////////
#include <stdio.h>
int main()
{
    FILE *fp1,*fp2;
    int num;
    char name[10];
    double score1,score2,score3,sum;

    fp1=fopen("origin.txt","r");
    if(fp1==NULL)
        printf("no1\n");
    fp2=fopen("output.txt","w");
    if(fp2==NULL)
        printf("no2\n");

    for(int i=0;i<3;i++){
        fscanf(fp1,"%d %c %d %d %d",&num,name,&score1,&score2,&score3);
        printf("%d %s %d %d %d",num,name,score1,score2,score3);
        fprintf(fp2,"%d %d %d",11,22,33);
        // fprintf(fp2,"%d  %s  %d  %d  %d  %d",num,name,score1,score2,score3,sum);
        printf("%d",num);
    }
    fclose(fp1);
    fclose(fp2);
}