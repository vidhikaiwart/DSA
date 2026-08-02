//Rotate an array by k positions.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int k ; 
    cin>> k ;
    
    int n ; 
    cin >> n;
    vector<int> arr(n);
    
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    
    }
    
      while(k--){
            int temp = arr[0];
    for(int i = 1 ; i < n; i++){
         arr[i-1]=arr[i];
    }
     arr[n-1]=temp ; 
    }
     cout<<"arr move k position : ";
     for(int j = 0; j<arr.size(); j++){
        cout <<arr[j] << " ";
};
   
};