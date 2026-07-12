// Reverse an array without using another array.

#include <iostream>
#include <vector>
using namespace std;

// & (reference), so the original vector is modified.
void reverse( vector<int>& arr, int n ) {
    
    int s = 0;
    int e = n-1;
    while(s <e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    
    cout << "\nReversed Array: ";
    for(int i = 0; i <n ; i++){
    cout << arr[i] << " ";
    } 
}


int main()
{
 
 int n ;
 cin >> n;
 
 // dynamic approch 
//  int* arr = new int[n];

vector<int> arr(n);

   for(int i = 0 ; i < n ; i++){
       cin >> arr[i] ;
   }
    for(int i = 0 ; i < n ; i++){
       cout << arr[i] << " ";
   }
   
   reverse(arr, n);
   return 0;
}