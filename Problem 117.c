#include <stdio.h>
int main()
{
    float X=11, Y=11;
    while(X<0 || X>10){
    scanf("%f",&X);
    if(X<0 || X>10){
        printf("nota invalida\n");
    }
    }
    while(Y<0 || Y>10){
    scanf("%f",&Y);
    if(Y<0 || Y>10){
        printf("nota invalida\n");
    }
    }
    printf("media = %0.2f\n",(X+Y)/2);
    return 0;
}
