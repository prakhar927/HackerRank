//Author Prakhar Shrivastav
#include <stdio.h>
int main(){
    int t,n,k,i,j,c,x;
    scanf("%d",&t);
    int res[t];
    for(i=0;i<t;i++){
        c=0;
        scanf("%d%d",&n,&k);
        for(j=0;j<n;j++){
            int data;
            scanf("%d",&data);
            if(data>0)
                x=0;
            else
                c++;
        }
        if(c>=k)
            res[i]=0;
        else
            res[i]=1;
    }
    for(i=0;i<t;i++){
        if(res[i]==1)
            printf("YES\n");
        else if(res[i]==0)
            printf("NO\n");
    }
} 