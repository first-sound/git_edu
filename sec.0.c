#include<stdio.h>
int main(void)
{
    int age;
    printf("年齢");
    scanf("%d",&age);
    if(age<=3){
    printf("幼児：無料\n");}

    else if(age<=12){
    printf("子供：５万。\n");}

    else{
        printf("大人：５億");
    }
    
    return 0;
}
