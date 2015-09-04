//Author Prakhar Shrivastav
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int t,i,flag=0;
    scanf("%d",&t);
    while(t--){
        char s[10000];
        scanf("%s",&s[0]);
        int x=strlen(s);
        for(i=0;i<x-1;i++){
            char a=s[i];
            char b=s[i+1];
            char c=s[x-1-i];
            char d=s[x-2-i];
            int m,n;
            m=a-b;
            n=c-d;
            if(abs(m)!=abs(n)){
                flag=1;
                break;
            }
        }
        if(flag==1)
            printf("Not Funny\n");
        else
            printf("Funny\n");
        flag=0;
    }
    return 0;
}