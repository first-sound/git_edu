#include<stdio.h>

int main(void)
{
    //�f������
    int suuti;
    printf("���肵��������");
    scanf(" %d",&suuti);

     for (int i = 2; i < suuti; i++)
    {
        if(suuti % i == 0)
        {
            printf("�f���ł͂Ȃ�");
            return 0;
        }
    }
    printf("�f��");
    return 0;
}
