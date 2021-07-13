#include<stdio.h>
void main(){
    int n,k,sum,c=0,i;
     scanf("%d%d",&n,&k);
     int ar[n];
      for ( i=0;i<n;i++){
       scanf("%d",&ar[i]);}
        for(i=0;i<n;i++){
            sum=ar[i]+k;
            if(sum%7==0){
                c++;
            }
        }
  printf("%d",c);
}