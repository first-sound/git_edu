#include<stdio.h>

int main(void)
{
    //‘f””»’è
    int suuti;
    printf("”»’è‚µ‚½‚¢”š");
    scanf(" %d",&suuti);

     for (int i = 2; i < suuti; i++)
    {
        if(suuti % i == 0)
        {
            printf("‘f”‚Å‚Í‚È‚¢");
            return 0;
        }
    }
    printf("‘f”");
    return 0;
}
