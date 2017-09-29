#include <stdio.h>
int fibonacci(int n)  {
  if(n == 0)
    return 0;
  else if(n == 1)
    return 1;
  else
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int a,b;
    scanf("%d",&a);
    b=fibonacci(a);
    printf("%d\n",b);
    return 0;
}
