#include<stdio.h>
int bigmod(int a,int p,int m);
int main()
{
      int a;
      a=bigmod(2,4,2);
      printf("%d",a);

      return 0;
}

int bigmod(int a,int p,int m)
{
      if(p==0)
      return 1;

      if(p%2==0){
      int c=bigmod(a,p/2,m);
      return c*c%m;
      }
      else
      return (a*bigmod(a,p-1,m)) %m;

}
