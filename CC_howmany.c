#include <stdio.h>
void main(){
    int n,c=0,nn;
    scanf("%d",&n);
    nn=n;
    while(nn!=0){
        nn=nn/10;
        c++;
    }
    if(c==1|| n==0)
    printf("1");
    else if(c==2)
    printf("2");
    else if(c==3)
    printf("3");
    else
    printf("More than 3 digits");
}