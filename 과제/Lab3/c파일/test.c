int main()
{
    char a,b,c,d;
    unsigned int n=0;
    printf("ù��° ���ڸ� �Է��Ͻÿ�.:");
    scanf("%c",&a);

    printf("�ι�° ���ڸ� �Է��Ͻÿ�.:");
    scanf("%c",&b);

    printf("����° ���ڸ� �Է��Ͻÿ�.:");
    scanf("%c",&c);

    printf("�׹�° ���ڸ� �Է��Ͻÿ�.:");
    scanf("%c",&d);

    n=(d<<24) | (c<<16) | (b<<8)|a|n;

    printf("�����:%x\n",n);
}