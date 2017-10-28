#include<iostream>
using namespace std;

// Function to comput num (mod a)
int mod(string num, int a)
{
    // Initialize result
    int res = 0;

    // One by one process all digits of 'num'
    for (int i = 0; i < num.length(); i++)
         res = (res*10 + (int)num[i] - '0') %a;

    return res;
}

// Driver program
int main()
{
    string num = "12316767678678987938475029836834782928375";
    cout << mod(num, 6);
    return 0;
}
