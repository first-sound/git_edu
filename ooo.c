#include<stdio.h>
int main(void){
    int suuti,mae=0,ato=1,sum;
    printf("nanban");
    scanf("%d",&suuti);

    for (int i = 1; i <= suuti; i++)
    {
        sum=mae+ato;
        printf("%d\n",ato);
        mae=ato;
        ato=sum;
    }
    
    return 0;
}