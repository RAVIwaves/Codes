//Code for sorting array of integers using Insertion Sort.

#include <bits/stdc++.h>
using namespace std ;

/*Function for sorting array using insertion sort. this function takes 
  array, starting index and end index as input and sort the desired part.
*/
void insertion_sort(int arr[],int start,int end)
{
    for(int i=start+1 ; i<=end ; i++)
    {
        int key = arr[i] , j ;
        for(j=i-1 ; j>=start ; j--)
            if(key>=arr[j])
                break ;
        for(int k=i-1 ; k>j ; k--)
            arr[k+1] = arr[k] ;
        arr[j+1] = key ;
    }
    return ;
}

int main()
{
    int n , start , end ;
    cout << "Enter Size of array:- " ;
    cin >> n ;
    int arr[n] ;
    cout << "Enter elements of array:-\n" ;
    for(int i=0 ; i<n ; i++)
        cin >> arr[i] ; 
    cout << "Enter starting and ending point for sorting:-\n" ;
    cin >> start >> end ;
    insertion_sort(arr,start-1,end-1) ;
    cout << "Your sorted array is below:\n" ;
    for(int j:arr)
        cout << j << " " ;
    return 0 ;
}