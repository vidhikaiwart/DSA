#include <iostream>
#include <string>
using namespace std;

// int getLenght(char name[]){
    
//     int len =0;
//     int i =0;
    
//     while(name[i] != '\0'){
//         len++;
//         i++;
//     }
//     return len;
// }

// int reveseCharArr(char name[]){
    
//     int i = 0;
//     int n = getLenght(name);
//     int j = n -1;
    
//     while(i<= j){
//         swap(name[i],name[j]);
//         i++;
//         j--;
//     }

// }



//replace space 
void replaceSpace(char sentence[]){
    int i = 0;
   
   while(sentence[i] != '\0'){
           if(sentence[i] == ' ') {
            sentence[i] = '@';
        }

    }
    
}


int main() {
   
//Char with getline
//   char name[50];
//    cin >> name ;
//     cin.getline(name, 50);

//string with getline
//  string name;
//   getline(cin,name);
//   cout << "mera name " << name << " hai" <<endl;

// char name[50];
// cin.getline(name,50);

// cout << "total lenght :  " << getLenght(name)<< endl;

// cout << name <<endl;
// reveseCharArr(name);
// cout << name << endl;


char sentence[100];

cin.getline(sentence,100);

cout<<sentence<<endl;

replaceSpace(sentence);

cout<<sentence<<endl;
   
    return 0;
}