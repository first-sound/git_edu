#include <stdio.h>

int main(void)
{
    int money,mark;
    money=5000;
    printf("点数を入れて\n");
    scanf("%d",&mark);
    if(mark>=80)
    {
        printf("ごほうびだよ\n");
        money=money+2000;
    }
    else{
        printf("次は頑張ってね\n");
        money=money-1000;
    }
    printf("今月のお小遣いは%d円です。\n",money);
    return 0;
}