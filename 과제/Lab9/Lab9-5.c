//////////////////////////////////////////////
//작성자: 백승희(2113783)
//작성일: 2023-05-11
//Lab9-5: 찾아바꾸기 기능구현 
//////////////////////////////////////////////
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char s[80] = "";
    char ctr1[80] = "";
    char ctr2[80] = "";
    char* content[80];  //단어를 저장할 곳
    int count = 0;
    char* token;    //token 포인터 변수 설정
    printf("문자열을 입력하시오: ");
    fgets(s, sizeof(s), stdin);
    printf("찾을 문자열: ");
    fgets(ctr1, sizeof(ctr1), stdin);
    printf("바꿀 문자열: ");
    fgets(ctr2, sizeof(ctr2), stdin);

    if (s[strlen(s)-1] == '\n')  //fgets의 마지막이 '\n'로 들어가는지 검사
        s[strlen(s) - 1] = '\0';  //'\0'으로 바꾸기
    if (ctr1[strlen(ctr1) - 1] == '\n')
        ctr1[strlen(ctr1) - 1] = '\0';
    if (ctr2[strlen(ctr2)-1] == '\n')
        ctr2[strlen(ctr2)-1] = '\0';

    token = strtok(s, " ");  //단어 분리하기
    while (token != NULL) {
        content[count] = token;
        token = strtok(NULL, " ");
        count++;   //단어개수 세기
    }
    printf("수정된 문자열: ");
    for (int i = 0; i < count; i++) {
        if (!(strcmp(content[i], ctr1)))  //바꿀 단어인지 strcmp이용해서 확인
            content[i] = ctr2;   //ctr2로 바꾸기
        printf("%s ", content[i]);
    }
    printf("\n");
}