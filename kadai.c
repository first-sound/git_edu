#include <stdio.h>

int main(void)
{
    int money,mark;
    money=5000;
    printf("“_”‚ğ“ü‚ê‚Ä\n");
    scanf("%d",&mark);
    if(mark>=80)
    {
        printf("‚²‚Ù‚¤‚Ñ‚¾‚æ\n");
        money=money+2000;
    }
    else{
        printf("Ÿ‚ÍŠæ’£‚Á‚Ä‚Ë\n");
        money=money-1000;
    }
    printf("¡Œ‚Ì‚¨¬Œ­‚¢‚Í%d‰~‚Å‚·B\n",money);
    return 0;
}