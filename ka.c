#include<stdio.h>
int main(void)
{
    //‘fˆö”•ª‰ğ
    int suuti;
    printf("”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
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