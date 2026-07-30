// Reverse an array

#include <iostream>
#include <vector>
using namespace std;

int main()
{
 
 int n ;
 cin >> n;
 
vector<int> arr(n);

   
   for(int i = 0 ; i < n ; i++){
       cin >> arr[i] ;
   }
   
    for(int i = 0 ; i < n ; i++){
       cout << arr[i] << " " ;
   }
  
  cout<<endl;
  
  int i = 0 ;
  int j = arr.size()-1;

 while(i < j){
     swap(arr[i],arr[j]);
     i++;
     j--;
 }
  
  cout<< "Reverse Array :  " ;
  
  for(int i = 0 ; i < n ; i++){
       cout << arr[i] << " " ;
   }
 
   return 0;
}