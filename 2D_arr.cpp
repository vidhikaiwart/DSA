#include <iostream>
#include <climits>
using namespace std;

// FIND SUM OF COULMN


void sumOfColumn (int arr[][3],int r , int c){
    
    for(int j = 0 ; j < c ; j++){
        int sum = 0 ;
        for(int i = 0 ; i <r ; i++){
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
    
}



//  int sumOfRow(int arr[][3], int r, int c ,int row){
//     long long  sum = 0; //IMP
    
//       for (int j = 0; j < c; j++) {
//         sum += arr[row][j];
//     }

//     return sum;
    

// }



// FIND SUM OF ROW 

//  int sumOfRow(int arr[][3], int r, int c ,int row){
//     long long  sum = 0; //IMP
    
//       for (int j = 0; j < c; j++) {
//         sum += arr[row][j];
//     }

//     return sum;
    

// }



// FIND SUM OF ARRAY

//  int sumOfArr(int arr[][3], int r, int c){
//     long long  sum = 0; //IMP
    
//       for(int i = 0 ; i < r ;i++){
//      for( int j = 0; j < c ; j++){
       
//       sum += arr[i][j];
//      }
//   }
    
//   return sum;
// }



// FIND MIN NUMBER IN 2D ARRAY

// int minOfArr(int arr[][3], int r, int c){
//     int mini = INT_MAX;
    
//       for(int i = 0 ; i < r ;i++){
//      for( int j = 0; j< c ; j++){
       
       
//       if( arr[i][j] < mini) {
//           mini = arr[i][j];
//       }
//      }
//   }
    
//   return mini;
// }


// FIND MAX NUMBER IN 2D ARRAY

// int maxOfArr(int arr[][3], int r, int c){
//     int maxi = INT_MIN;
    
//       for(int i = 0 ; i < r ;i++){
//      for( int j = 0; j< c ; j++){
       
       
//       if( arr[i][j] > maxi) {
//           maxi = arr[i][j];
//       }
//      }
//   }
    
//   return maxi;
// }



int main() {
    
    int r= 3;
    int c = 3;
    
    int arr[3][3];
 
  for(int i = 0 ; i < r ;i++){
     for( int j = 0; j< c ; j++){
         cin>> arr[i][j];
     }
  }
 
 for(int i = 0 ; i < r ;i++){
     for( int j = 0; j< c ; j++){
         cout << arr[i][j]  << " ";
     }
     cout<< endl;
 }
 
 cout << endl;
 
//  int ans = maxOfArr(arr,r,c);
//  cout <<  "max number :  " << ans << endl

// int ans = minOfArr(arr,r,c);
//  cout <<  "min number :  " << ans << endl;

// int ans = sumOfArr(arr,r,c);
//  cout <<  "sum of arr number :  " << ans << endl;

// int row ;
// cin >> row ;

// int ans = sumOfRow(arr,r,c,row);
//  cout <<  "sum of row :  " << ans << endl;


 sumOfColumn(arr,r,c);

 
// return 0;
}