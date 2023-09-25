//////////////////////////////////////////////
//작성자: 백승희(2113783)
//작성일: 2023-05-18
//Lab10-1: 은행계좌 구조체 만들기
//////////////////////////////////////////////
#include <stdio.h>
struct account{    //은행계좌 구조체
    int number;
    char name[20];
    int balance;
};
int main(){
    struct account a={1,"홍길동",100000};
    printf("{ %d, %s, %d }\n",a.number,a.name,a.balance);
    //"."으로 구조체 항목에 접근
}