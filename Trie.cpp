#include <bits/stdc++.h>
using namespace std;
#define max_node 100000
#define max_len 100
int node[max_node][26];
int root,nnode;
int isword[max_node];
string s,s1;
void initialize() {
    root=0;
    nnode=0;
    for(int i=0;i<26;i++)
        node[root][i]=-1;
}
void insert() {
    cin>>s;
    int now=root;
    for(int i=0;i<s.length();i++) {
        if(node[now][s[i]-'a']==-1) {
            node[now][s[i]-'a']=++nnode;
            for(int j=0;j<26;j++)
                node[nnode][j]=-1;
        }
        now=node[now][s[i]-'a'];
    }
    isword[now]=1;
}
bool search() {
    int now=root;
    for(int i=0;i<s1.length();i++) {
        if(node[now][s1[i]-'a']==-1)
            return false;
        now=node[now][s1[i]-'a'];
    }
    if(isword[now]==1)
        return true;
    else
        return false;
}
int main()
{
    //for building trie string s and for query string s1;
    int n,query;
    initialize();
    cin>>n;
    for(int i=1;i<=n;i++)
        insert();
    cin>>query;
    bool ans=false;
    for(int i=1;i<=query;i++) {
        cin>>s1;
        ans=search();
        if(ans==true)
            cout<<"Found"<<endl;
        else
            cout<<"Not Found"<<endl;
        s1.clear();
    }
    return 0;
}
