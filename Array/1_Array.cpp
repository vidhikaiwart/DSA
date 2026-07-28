// Find the largest and second largest element.

#include <iostream>
#include <vector>
#include<climits>
using namespace std;

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
       cout << arr[i] << " " ;
   }
  
  cout<<endl;
  
  int f = INT_MIN;
  int s = INT_MIN;
  
  for(int i =0 ; i<arr.size(); i++){
      if(arr[i] > f){
          s = f ;
          f = arr[i];
      }
  }
  
  cout<< "first lagest number :"<< f << endl; 
    cout<< "second lagest number : "<< s << endl; 
   return 0;
}