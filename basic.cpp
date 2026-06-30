// Numbers (Math & Logic)

//1. Check if a number is Prime.

// #include <iostream>
// #include <string>
// using namespace std; 

// bool primeNumber(int n){
//     int i =2;

//     while(i<n){
//         if(n%i==0){
//             cout<<"not a prime number"<<endl;
//             return false;
//         }
//         else{
//             i++;    
//         }
//     }
//     cout<<"prime number"<<endl;
//     return true;
// }

// int main(){
//     int a;
//    cin>> a;

//  primeNumber(a);

//  return 0;
// }



// //2 Print all Prime numbers in a range.
// #include <iostream>
// #include <string>
// using namespace std; 

// void primeNumber(int s, int e ){
//  for(int i = s; i<=e; i++){
//     int j = 2;
//   if(i==1) cout << "1 is neither prime nor composite : "<< i <<endl;
//   if(i==2) cout << "2 is prime number : " << i <<endl;
//   else{
//     while(j<i){
//         if(i%j==0){
//             cout<<i<<" is not a prime number :  " << i <<endl;
//             break;
//         }
//         else{
//             j++;
//         }
//     }
//     if(j==i){
//         cout<<i<<" is prime number : "<< i <<endl;
//     }
//   }
//  }
// }

// int main(){
//     int s, e;
   
//     cin >> s >> e;

//     primeNumber(s,e);
//     return 0;
// }



//3.Check if a number is Palindrome.

#include <iostream>
#include <string>
using namespace std; 

bool CheckPalindrom(int n){

  int originalNum = n;
  int rever = 0;

  while(n>0){

    int rem = n%10;
    rever = rever*10 + rem;
    n=n/10;
  }
  return originalNum == rever;
}

int main(){
    int n = 3443;
   
if(CheckPalindrom(n))
    cout<< n << " is a palindrome number"<<endl;
else
    cout<< n << " is not a palindrome number"<<endl;

    return 0;
}

