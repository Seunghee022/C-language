//////////////////////////////////////////////
//�ۼ���: �����(2113783)
//�ۼ���: 2023-05-11
//Lab9-5: ã�ƹٲٱ� ��ɱ��� 
//////////////////////////////////////////////
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char s[80] = "";
    char ctr1[80] = "";
    char ctr2[80] = "";
    char* content[80];  //�ܾ ������ ��
    int count = 0;
    char* token;    //token ������ ���� ����
    printf("���ڿ��� �Է��Ͻÿ�: ");
    fgets(s, sizeof(s), stdin);
    printf("ã�� ���ڿ�: ");
    fgets(ctr1, sizeof(ctr1), stdin);
    printf("�ٲ� ���ڿ�: ");
    fgets(ctr2, sizeof(ctr2), stdin);

    if (s[strlen(s)-1] == '\n')  //fgets�� �������� '\n'�� ������ �˻�
        s[strlen(s) - 1] = '\0';  //'\0'���� �ٲٱ�
    if (ctr1[strlen(ctr1) - 1] == '\n')
        ctr1[strlen(ctr1) - 1] = '\0';
    if (ctr2[strlen(ctr2)-1] == '\n')
        ctr2[strlen(ctr2)-1] = '\0';

    token = strtok(s, " ");  //�ܾ� �и��ϱ�
    while (token != NULL) {
        content[count] = token;
        token = strtok(NULL, " ");
        count++;   //�ܾ�� ����
    }
    printf("������ ���ڿ�: ");
    for (int i = 0; i < count; i++) {
        if (!(strcmp(content[i], ctr1)))  //�ٲ� �ܾ����� strcmp�̿��ؼ� Ȯ��
            content[i] = ctr2;   //ctr2�� �ٲٱ�
        printf("%s ", content[i]);
    }
    printf("\n");
}