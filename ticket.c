 #include<stdio.h>
#include<string.h>

int main(void){
    int t;
    scanf("%d",&t);
    while(t--){
        int i,f=0;
        char s[100];
        scanf("%s",s);
        if(s[0]==s[1]){
            printf("NO\n");
            continue;
        }
        for(i=0;s[i];i++){
            if(i%2==0){
                if(s[0]!=s[i]){
                    f=1;
                    break;
                }
            }
            else{
                if(s[1]!=s[i]){
                    f=1;
                    break;
                }
            }
        }
        if(f==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}


