//Code for sorting array of llegers using Insertion Sort.

#include <bits/stdc++.h>
using namespace std ;

typedef long long ll ;

/*Function for sorting array using insertion sort. this function takes 
  array, starting index and end index as input and sort the desired part.
*/
void insertion_sort(ll arr[],ll start,ll end)
{
    for(ll i=start+1 ; i<=end ; i++)
    {
        ll key = arr[i] , j ;
        for(j=i-1 ; j>=start ; j--)
            if(key>=arr[j])
                break ;
        for(ll k=i-1 ; k>j ; k--)
            arr[k+1] = arr[k] ;
        arr[j+1] = key ;
    }
    return ;
}

int main()
{
    //test for function
    ll n , start , end ;
    cout << "Enter Size of array:- " ;
    cin >> n ;
    ll arr[n] ;
    cout << "Enter elements of array:-\n" ;
    for(ll i=0 ; i<n ; i++)
        cin >> arr[i] ; 
    cout << "Enter starting and ending poll for sorting:-\n" ;
    cin >> start >> end ;
    insertion_sort(arr,start-1,end-1) ;
    cout << "Your sorted array is below:\n" ;
    for(ll j:arr)
        cout << j << " " ;
    return 0 ;
}