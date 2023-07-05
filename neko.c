#include<stdio.h>
int main(void)
{
    //ƒuƒ‰ƒ“ƒ`
    int n;
    int sum=1;
    printf("n=");
    scanf("%d",&n);
    for ( int i = 1; i <=n; i++)
    {
        
       sum=sum*i;
       printf("%d! %7d\n",i,sum);

    }
    
    return 0;
}