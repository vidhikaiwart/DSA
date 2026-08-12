#include <iostream>
using namespace std;

int partition(int arr[], int s,int e){
    //step 1 choose pivotelment 
    int pivotIndex = s;
    int pivotElement = arr[s];
    
    //step 2 find right position for pivot Elmemt and place it there
    
    int count = 0;
    for(int i = s+1; i<=e; i++){
        if(arr[i] <= pivotElement){
            count++;
        }
    }
    // when loop complete i have my right index for pivotElement
    int rightIndex = s+ count;
    swap(arr[pivotIndex],arr[rightIndex]);
    pivotIndex= rightIndex;
    
    //step 3 left me chote and right me bade element place
    
    int i= s; int j = e;
    
    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] <= pivotElement){
            i++;
        }
        while(arr[j] > pivotElement){
            j--;
        }
        
        // 2 case - 1. found the wrong element 
        //          2.no need to swap 
        
        if(i < pivotIndex && j > pivotIndex){
            swap (arr[i],arr[j]);
        }
        
    }
        return pivotIndex;

}


void quickSort(int arr[] , int s, int e){
    //base case 

    if(s>=e) return ;
    
    //partition logic , reurn pivotindex
    int p = partition(arr,s,e);
    
    //recursive call 
    //pivot element -> left
    quickSort(arr,s , p-1);
    
    //pivot element -> right 
    quickSort(arr, p+1 , e);
}


int main() {
    int arr[]={8,1,3,4,20,50,30 ,34,65,67,87,34,86,89,35,87,97,23};
    int n = 18;
    
    int s =0;
    int e = n-1;
    
    quickSort(arr , s, e);
    
    for(int i = 0; i <  n ; i++){
        cout << arr[i] << " ";
    }
    cout<< endl;                   
    
    return 0;
}