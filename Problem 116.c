#include<stdio.h>
 int main()
 {
     int N, i;
     float X, Y, div;
     scanf("%d",&N);
     for(i=1;i<=N;i++){
        scanf("%f %f",&X,&Y);
        if(Y!=0){
            div=X/Y;
            printf("%0.1f\n",div);
        }
        else if(Y==0){
            printf("divisao impossivel\n");
        }
     }
     return 0;
 }
