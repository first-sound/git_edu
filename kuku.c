#include <stdio.h>
int main(void)
{
    int suuti1,suuti2,ans=1;
    char en;

    printf("���l�����\n");
    scanf("%d,%d",&suuti1,&suuti2);

    printf("���Z�q�����\n");
    scanf(" %c", &en);

    if(en== '+')
        printf("���Z���ʁF%d",suuti1+suuti2); 
    else if(en== '-')
        printf("���Z���ʁF%d",suuti1-suuti2);
    else if(en== '*')
        printf("���Z���ʁF%d",suuti1*suuti2);
    else if(en== '/')
        printf("���Z���ʁF%d",suuti1/suuti2);
    else if(en== '%')
        printf("���Z���ʁF%d",suuti1%suuti2);
    else if(en== '^'){
        for(int i=1;i<=suuti2;i++)
        {
         ans=ans*suuti1;
        }
        printf("���Z���ʁF%d",ans);}

    return 0;
}