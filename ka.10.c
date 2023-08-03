#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Ç©Ç∏Ç†Çƒ

int GetRandom(int min,int max);

int main(void)
{
    int suuti,kazu,i=1;
    srand((unsigned int)time(NULL));

    kazu=GetRandom(1,500);

    printf("êîílÇì¸óÕ\n");
    scanf("%d",&suuti);
    
    while (suuti!=kazu)
    {
        if(suuti>kazu)
        printf("ÇªÇÍÇÊÇËè¨Ç≥Ç¢\n");
        if(suuti<kazu)
        printf("ÇªÇÍÇÊÇËëÂÇ´Ç¢\n");

        printf("êîílÇì¸óÕ\n");
        scanf("%d",&suuti);

        i++;
    } 
    
    printf("%dâÒÇ≈ê≥âÇµÇ‹ÇµÇΩ",i);
    
    return 0;
}


int GetRandom(int min,int max){
    return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
}