//Code for calculating cobination.

#include <bits/stdc++.h>
using namespace std ;

/*Function for calculating cobination. this function takes 
  total no. of objects and no. of objects we want to choose.
*/
long long nCr(long long n,long long r)
{
    long long ans = 1 ;
    for(long long i=0 ; i<min(r,n-r) ; i++)
    {
        ans *= n-i ;
        ans /= i+1 ;
    }
    return ans ;
}

int main()
{
    long long n , r ;
    cout << "Enter number of total objects : " ;
    cin >> n ;
    cout << "Enter how many objects we have to choose : " ;
    cin >> r ;
    cout << "Number of Total combinations is " << nCr(n,r) ;
    return 0 ;
}