#include <bits/stdc++.h>
using namespace std;
void Decimal(char *binary)
{
   char digits[1000]; // arbitrary size for now

   for (int i=0; i< 1000; ++i)
     digits[i] = 0;

   while (*binary != 0)
   {

   // shift the digits, with carry
     int carry = 0;

     for (int i = 0; i< 1000; ++i)
     {
       int d = digits[i] *2 + carry;
       carry = d > 9;
       digits[i] = d % 10;
     }

   // or in the new bit
     if (*binary++ == '1')
       digits[0] |= 1;
   }

    // output with leading zeroes!
    for (int i = 7; i >=0; --i)
    {
      putchar(digits[i] + '0'); // convert to ascii
    }
}
int main()
{
    char str[1010];
    //memset(str,0,sizeof(str));
    int i;
    gets(str);
    Decimal(str);
    return 0;
}
