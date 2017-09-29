#include <stdio.h>
#define sz 1000000000
int ara[sz];
void sieve()
{
    int i,j,root;
    for(i=2;i<=sz;i++){
        ara[i]=1;
    }
    root=sqrt(sz);
    for(i=2;i<=root;i++){
        if(ara[i]==1){
            for(j=2;i*j<=sz;j++){
                ara[i*j]=0;
            }
        }
    }
}
int main()
{
    int i,j;
    sieve();
    //for(i=2;i<=sz;i++){
      //  if(ara[i]==1)
        //printf("%d ",i);
    //}
    return 0;
}
