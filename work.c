#include<stdio.h>
void greatest(int a,int b,int c, int e){
      int total= 7*b;
      int start= c*a;
      int remaining=e*(7-a);
      int total1=start+remaining;
      //printf("\n%d %d",total,total1);
      total>=total1 ? printf("\n%d",total):printf("\n%d ",total1);
}
int main(){
    int d,x,y,z,t;
    //scanf("%d%d%d%d",&d,&x,&y,&z);
    scanf("%d",&t);
    while(t--){
     scanf("%d%d%d%d",&d,&x,&y,&z);
     greatest(d,x,y,z);}
}