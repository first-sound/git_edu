#include<stdio.h>

int main(void)
{
    //素数判定
    int suuti;
    printf("判定したい数字");
    scanf(" %d",&suuti);

     for (int i = 2; i < suuti; i++)
    {
        if(suuti % i == 0)
        {
            printf("素数ではない");
            return 0;
        }
    }
    printf("素数");
    return 0;
}
