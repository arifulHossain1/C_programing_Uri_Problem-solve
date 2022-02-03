#include<stdio.h>
 int main()
 {
     int i, N;
     for(i=1;i>0;i++){
        scanf("%d",&N);
        if(N==2002){
            printf("Acesso Permitido\n");
            break;
        }
        else if(N!=2002){
            printf("Senha Invalida\n");
        }
     }
     return 0;
 }
