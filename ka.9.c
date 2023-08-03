#include<stdio.h>
int main(void){
    //‚¨‹à‚Ì–‡”
    int suuti,hyaku,ju,ichi;
    printf("‚¢‚­‚çH");
    scanf("%d",&suuti);

    hyaku=suuti/100;
    ju=(suuti-hyaku*100)/10;
    ichi=suuti-(hyaku*100+ju*10);
    
    printf("100‰~%d–‡\n10‰~%d–‡\n1‰~%d–‡",hyaku,ju,ichi);

    return 0;
}