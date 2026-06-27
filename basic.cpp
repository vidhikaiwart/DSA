//1. Check if a number is Prime.

#include <iostream>
#include <string>
using namespace std; 

bool primeNumber(int n){
    int i =2;

    while(i<n){
        if(n%i==0){
            cout<<"not a prime number"<<endl;
            return false;
        }
        else{
            i++;    
        }
    }
    cout<<"prime number"<<endl;
    return true;
}

int main(){
    int a;
   cin>> a;

 primeNumber(a);

 return 0;
}
