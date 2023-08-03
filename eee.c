#include<stdio.h>
int main (void)
{
    //hogefuga‚Ì‚â‚Â
    int num;
    printf("nanban");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        if(i%15==0)
            printf("hogefuga\n");
        else if(i%3==0)
            printf("hoge\n");
        else if(i%5==0)
            printf("fuga\n");
        else 
            printf("%d\n",i);
        
    }
    

    return 0;
}