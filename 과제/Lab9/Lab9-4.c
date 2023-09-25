//////////////////////////////////////////////
//작성자: 백승희(2113783)
//작성일: 2023-05-11
//Lab9-4: 회문검사 (소문자로 통일)
//////////////////////////////////////////////
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[]=" ";
    printf("문자열을 입력하시오: ");
    scanf("%s",a);
    int len=strlen(a);
    for(int i=0;i<len;i++)  //소문자로 바꾸기
        a[i]=tolower(a[i]);
    int check=1;  //회문일때 flag값
    for (int i=0;i<len/2;i++){
        if (!(a[i]==a[len-1-i]))  // 회문일때
            check=1;
        else  //아닐때
            check=0;
    }
    if (check==1)
        printf("회문입니다.\n");
    else
        printf("회문이 아닙니다.\n");
}