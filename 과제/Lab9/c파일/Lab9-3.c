//////////////////////////////////////////////
//�ۼ���: �����(2113783)
//�ۼ���: 2023-05-11
//Lab9-3: ���ܾ��� ���� ���ϱ�
//////////////////////////////////////////////
#include <stdio.h>
#include <string.h>
int get_word_count(char *s){
    char *token;  //token�� �����ͺ����� ����
    int count=0;
    token=strtok(s," ");  //ù��°�ܾ�
    while(token!=NULL){     //�ܾ ���ϸ鼭 count���� �ϳ��� ����
        token=strtok(NULL," ");
        ++count;
    } 
    return count;  //count�� �ܾ��� ����
}
int main(){
    char s[100]="";
    printf("���ڿ��� �Է��Ͻÿ�: ");
    fgets(s,sizeof(s),stdin);
    printf("�ܾ��� ���� %d�Դϴ�.\n",get_word_count(s));
}