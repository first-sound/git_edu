#include<stdio.h>
int main(void)
{
    //�f��������
    int suuti;
    printf("���l����͂��Ă�������");
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