#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//��������

int GetRandom(int min,int max);

int main(void)
{
    int suuti,kazu,i=1;
    srand((unsigned int)time(NULL));

    kazu=GetRandom(1,500);

    printf("���l�����\n");
    scanf("%d",&suuti);
    
    while (suuti!=kazu)
    {
        if(suuti>kazu)
        printf("�����菬����\n");
        if(suuti<kazu)
        printf("������傫��\n");

        printf("���l�����\n");
        scanf("%d",&suuti);

        i++;
    } 
    
    printf("%d��Ő������܂���",i);
    
    return 0;
}


int GetRandom(int min,int max){
    return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
}