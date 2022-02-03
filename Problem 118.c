#include <stdio.h>
int main()
{
    float x=11, y=11;
    int X=1;
    while(X==1)
     {
    do{
    scanf("%f",&x);
    if(x<0 || x>10){
        printf("nota invalida\n");
    }
    }while(x<0 || x>10);
    do{
    scanf("%f",&y);
    if(y<0 || y>10){
        printf("nota invalida\n");
     }
    }while(y<0 || y>10);
    printf("media = %0.2f\n",(x+y)/2);
    do{
        scanf("%d",&X);
        printf("novo calculo (1-sim 2-nao)\n");
      }while(X!=1 && X!=2);
    }
    return 0;
}

