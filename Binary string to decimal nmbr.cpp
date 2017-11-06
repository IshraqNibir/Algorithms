#include <bits/stdc++.h>
#define MOD 131071
using namespace std;
int main(){
    char c ;
    int M ;
    while(cin >> c ){
        M  = c - '0' ;
        while( cin >> c ){
            if( c == '#' ) break ;
            M = M * 2 + c - '0' ;
            M %= MOD ;//its not necessary
        }
        if(M) puts("NO");
        else  puts("YES");
    }
}
