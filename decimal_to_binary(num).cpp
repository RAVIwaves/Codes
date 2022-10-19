//Code for decimal to binary conversion

#include <bits/stdc++.h>
using namespace std ;

typedef long long ll ;

/*Function for converting decimal number to binary string it takes a 
  decimal number as parameter and returns the binary string.
*/
string decimal_to_binary(ll n)
{
    if(n==0)
        return "0" ;
    string ans = "" ;
    while(n>0)
    {
        if(n%2 != 0)
            ans += "1" ;
        else
            ans += "0" ;
        n /= 2 ;
    }
    reverse(ans.begin(),ans.end()) ;
    return ans ;
}

int main()
{
    //test for function
    ll n ;
    cout << "Enter a decimal number :\n" ;
    cin >> n ;
    cout << "binary equivalent of this decimal number is " << decimal_to_binary(n) << "." ; 
    return 0 ;
}