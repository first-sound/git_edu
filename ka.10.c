#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//かずあて

int GetRandom(int min,int max);

int main(void)
{
    int suuti,kazu,i=1;
    srand((unsigned int)time(NULL));

    kazu=GetRandom(1,500);

    printf("数値を入力\n");
    scanf("%d",&suuti);
    
    while (suuti!=kazu)
    {
        if(suuti>kazu)
        printf("それより小さい\n");
        if(suuti<kazu)
        printf("それより大きい\n");

        printf("数値を入力\n");
        scanf("%d",&suuti);

        i++;
    } 
    
    printf("%d回で正解しました",i);
    
    return 0;
}


int GetRandom(int min,int max){
    return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
}