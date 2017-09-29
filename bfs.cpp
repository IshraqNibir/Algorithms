#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int visited[100],level[100],parent[100];
vector<int>adj[100];
//vector<int>item;
void bfs(int s,int n)
{
    for(int i=0;i<n;i++)
        visited[i]=0;
    queue<int>q;
    q.push(s);
    level[s]=0;
    visited[s]=1;
    int mount=0;
    while(!q.empty())
    {
        int u=q.front();
        item.push_back(u);
        q.pop();
        for(int i=0;i<adj[u].size();i++)
        {
            if(visited[adj[u][i]]==0)
            {
                int v=adj[u][i];
                level[v]=level[u]+1;
                parent[v]=u;
                visited[v]=1;
                q.push(v);
            }
        }
    }
}
int main()
{
    int i,e,p,nu,u,v,f,m,n,s;
    cout<<"Enter Total Nodes And Edges="<<endl;
    cin>>nu>>e;
    for(i=1;i<=e;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout<<"Enter 1st node"<<endl;
    cin>>f;
    bfs(f,nu);
    cout<< "Enter node to know shortest path"<<endl;
    cin>>nu;
    cout<<"Shortest path is="<<level[nu]<<endl;
    cout<<"Enter node to know its parent"<<endl;
    cin>>p;
    while(p!=f)
    {
        p=parent[p];
    }
    cout<<"Parent is "<<p<<endl;
    for(m=0;m<item.size();m++)
    {
        cout<<item[m]<<" "<<endl;
    }
    return 0;
}
