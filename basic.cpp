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



//2 Print all Prime numbers in a range.
#include <iostream>
#include <string>
using namespace std; 

void primeNumber(int s, int e ){
    if(s<2){
        s=2;
    }
    while(s<=e){
        if(s %2 ==0 && s!=2){
            s++;
            continue;
            cout<<"not a prime number :  "<<s<<endl;
        }else{
            cout << "prime number :  "<<s<<endl;
            s++;
        }
    }
}

int main(){
    int s, e;
   
    cin >> s >> e;

    primeNumber(s,e);
    return 0;
}