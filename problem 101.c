#include<stdio.h>
 int main()
 {
     int M, N, i, sum=0;
       scanf("%d %d",&M,&N);
     while(M>0 && N>0){
        if(M>N){
            for(i=N;i<=M;i++){
                    sum=sum+i;
                    printf("%d ",i);
            }
             printf("Sum=%d\n",sum);
        }
        else if(M<N){
            for(i=M;i<=N;i++){
                    sum=sum+i;
                    printf("%d ",i);
            }
             printf("Sum=%d\n",sum);
     }
       scanf("%d %d",&M,&N);
       sum=0;
   }
  return 0;
 }
