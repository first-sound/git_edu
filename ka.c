#include<stdio.h>
int main(void)
{
    //素因数分解
    int suuti;
    printf("数値を入力してください");
    scanf("%d",&suuti);

    for (int i = 2; i <= suuti; i++)
    {
        while (suuti%i==0)
        {
            printf("%d\n",i);
            suuti=suuti/i;
        }
        
    }

    return 0;
}