#include<stdio.h>
void main(){
    int t;
    scanf("%d",&t);
    while(t--){
    int k,n,i,ar[100];
    
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
       scanf("%d",&ar[i]);}

    for(i=0;i<n;i++){
       if(ar[i]<=k)
          { k=k-ar[i];
           printf("1");}
           else
           printf("0");}
    }
       

    }
