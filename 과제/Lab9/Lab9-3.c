//////////////////////////////////////////////
//작성자: 백승희(2113783)
//작성일: 2023-05-11
//Lab9-3: 영단어의 개수 구하기
//////////////////////////////////////////////
#include <stdio.h>
#include <string.h>
int get_word_count(char *s){
    char *token;  //token을 포인터변수로 설정
    int count=0;
    token=strtok(s," ");  //첫번째단어
    while(token!=NULL){     //단어를 구하면서 count값을 하나씩 증가
        token=strtok(NULL," ");
        ++count;
    } 
    return count;  //count가 단어의 개수
}
int main(){
    char s[100]="";
    printf("문자열을 입력하시오: ");
    fgets(s,sizeof(s),stdin);
    printf("단어의 수는 %d입니다.\n",get_word_count(s));
}