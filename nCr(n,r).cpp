//Code for calculating cobination.

#include <bits/stdc++.h>
using namespace std ;

typedef long long ll ;

/*Function for calculating cobination. this function takes 
  total no. of objects and no. of objects we want to choose.
*/
ll nCr(ll n,ll r)
{
    ll ans = 1 ;
    for(ll i=0 ; i<min(r,n-r) ; i++)
    {
        ans *= n-i ;
        ans /= i+1 ;
    }
    return ans ;
}

int main()
{
    //test for function
    ll n , r ;
    cout << "Enter number of total objects : " ;
    cin >> n ;
    cout << "Enter how many objects we have to choose : " ;
    cin >> r ;
    cout << "Number of Total combinations is " << nCr(n,r) ;
    return 0 ;
}