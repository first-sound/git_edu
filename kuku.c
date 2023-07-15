#include <stdio.h>
int main(void)
{
    int suuti1,suuti2,ans=1;
    char en;

    printf("”’l‚ğ“ü—Í\n");
    scanf("%d,%d",&suuti1,&suuti2);

    printf("‰‰Zq‚ğ“ü—Í\n");
    scanf(" %c", &en);

    if(en== '+')
        printf("‰‰ZŒ‹‰ÊF%d",suuti1+suuti2); 
    else if(en== '-')
        printf("‰‰ZŒ‹‰ÊF%d",suuti1-suuti2);
    else if(en== '*')
        printf("‰‰ZŒ‹‰ÊF%d",suuti1*suuti2);
    else if(en== '/')
        printf("‰‰ZŒ‹‰ÊF%d",suuti1/suuti2);
    else if(en== '%')
        printf("‰‰ZŒ‹‰ÊF%d",suuti1%suuti2);
    else if(en== '^'){
        for(int i=1;i<=suuti2;i++)
        {
         ans=ans*suuti1;
        }
        printf("‰‰ZŒ‹‰ÊF%d",ans);}

    return 0;
}