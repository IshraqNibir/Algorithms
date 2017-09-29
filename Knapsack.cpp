#include <iostream>
using namespace std;
int cost[10],weight[10];
int profit1,profit2,maxi=0;
int cap=8;
int func(int i,int w)
{
    cout<<i<<" "<<w<<endl;
    if(i==4)
        return 0;
    if(w+weight[i]<=cap)
       profit1=cost[i]+func(i+1,w+weight[i]);
    //cout<<i<<" "<<w<<endl;
    profit2=func(i+1,w);
    cout<<"profit1="<<profit1<<" "<<"profit2="<<profit2<<endl;
    int z= max(profit1,profit2);
    if(z>maxi)
       maxi=z;

}
int main()
{
    weight[1]=3;cost[1]=7;
    weight[2]=4;cost[2]=9;
    weight[3]=5;cost[3]=11;
    int ans=func(1,0);
    cout<<maxi<<endl;

}
