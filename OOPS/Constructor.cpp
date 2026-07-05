#include <iostream>
#include <string>

using namespace std;

class Animal {
    
    public:
    int age ;              //data member
    string name ;
    int weight;
    
    
    // default constructor
    Animal(){
        this->weight = 0;
        this-> age =0;
        this->name = "";
        cout << "constructor called" <<endl;
    }
    
    //parameterised constructor
    Animal(int age){
        this->age = age;
        cout << "parameterised constructor called "<<endl;
    }
    
    Animal(int age , int weight){
        this->age = age;
        this-> weight = weight;
        cout << "parameterised 2 constructor called "<<endl;
    }

    // copy constructor
    Animal(const Animal &obj){
        this->age = obj.age;
        this->weight = obj.weight;
        this->name = obj.name;
        cout << "copy constructor"<<endl;
    }
    
    //for copy constructor
    void print(){
        cout <<this->age << " "<< this->weight << " "<< this->name << endl;
    }
    
    ~Animal(){
        cout << " i am inside destructor"<<endl;
    }
};


int main() {
    

//object copy constructor

// Animal c = a;
// Animal c(b);

// Animal animal1(c);



// Create an object of the class
Animal a;

// Assign values to the object's attributes
a.age = 20;
a.name = "chhaya";
a.weight = 46;

// Create a copy of the object
Animal b = a;

// Print both objects
a.print();
b.print();
 
return 0;
}
