#include <stdio.h>

int main(void)
{
    int money,mark;
    money=5000;
    printf("�_��������\n");
    scanf("%d",&mark);
    if(mark>=80)
    {
        printf("���ق��т���\n");
        money=money+2000;
    }
    else{
        printf("���͊撣���Ă�\n");
        money=money-1000;
    }
    printf("�����̂���������%d�~�ł��B\n",money);
    return 0;
}