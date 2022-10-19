//Code for converting a binary string to decimal number

#include <bits/stdc++.h>
using namespace std ;

typedef long long ll ;

/*Function for converting binary string to number it takes a 
  binary string as parameter and returns the decimal number.
*/
ll binary_to_decimal(string s)
{
    ll ans = 0 ;
    for(ll i=0 ; i<s.length() ; i++)
        if(s[i]=='1')
            ans += pow(2,s.length()-i-1) ;
    return ans ;
}

int main()
{
    //test for function
    string s ;
    cout << "Enter a binary string :\n" ;
    cin >> s ;
    cout << "Decimal equivalent of this binary string is " << binary_to_decimal(s) << "." ; 
    return 0 ;
}