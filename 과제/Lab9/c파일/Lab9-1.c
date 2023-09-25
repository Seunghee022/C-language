//////////////////////////////////////////////
//작성자: 백승희(2113783)
//작성일: 2023-05-11
//Lab9-1: 대문자->소문자, 소문자->대문자
//////////////////////////////////////////////
#include <stdio.h>
#include <ctype.h>
int main(){
    char c[100]="";
    printf("영어 문장을 입력하세요 >>\n");
    fgets(c,sizeof(c),stdin);
    printf("\n입력한 문자열에서 대문자와 소문자를 반대로 변환하면 >>\n");
    int i=0;
    while(c[i]){  //문장이 끝날 때까지 반복
        if (isalpha(c[i])){   //알파벳인지 확인
            if (isupper(c[i]))   //대문자면 소문자로
                c[i]=tolower(c[i]);
            else if (islower(c[i]))   //소문자면 대문자로
                c[i]=toupper(c[i]);
        }
        i++;
    }
    printf("%s\n",c);
}