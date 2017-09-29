#include <iostream>
using namespace std;
int nCr(int n,int r)
{
    if(r==1) return n;
    if (n==r) return 1;
    return nCr(n-1, r) + nCr(n-1, r-1);
}
int main()
{
    int a,b;
    cin>>a>>b;
    int k=nCr(a,b);
    cout<<k<<endl;
    return 0;
}
