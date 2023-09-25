//////////////////////////////////////////////
//작성자: 백승희(2113783)
//작성일: 2023-05-11
//Lab9-2: int str_chr(char *s,int c)함수 만들어서 문자의 빈도계산
//////////////////////////////////////////////
#include <stdio.h>
int str_chr(char *s,int c){   //s문자열에서 (char)c의 문자가 몇번나왔는지
    int cnt=0;
    for(int i=0;s[i];i++)
        if (s[i]==(char)c)
            cnt++;
    return cnt;
}
int main(){
    char c[100]="";
    printf("문자열을 입력하시오: ");
    fgets(c,sizeof(c),stdin); 
    for(int i='a';i<='z';i++)  //a~z까지 for문돌면서 개수확인
       printf("%c =%d\n",i,str_chr(c,i)); 
}