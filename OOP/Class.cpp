#include <iostream>
using namespace std;

class Animal {
    // int age;
    // int weight;
    //  char ch;
    
    //state or properties
    
    private: // private member 
    // int weight;
    
    
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
    //copy constructor
    // Animal(Animal &obj){
    //     cout << "copy constructor"<<endl;
    // }
    
    //behavious
    void eat(){
        cout<<"eating"<<endl;  // member function
        
    }
    void sleep(){
      cout<< "sleeping"<<endl;
    }
    
    
    //acess privat member 
    // int getWeight(){
    //     return weight;
    // }
    //  void setWeight(int w){
    //     weight = w;
    // }
    
    
    //for copy constructor
    void print(){
        cout <<this->age << " "<< this->weight << " "<< this->name << endl;
    }
    
    ~Animal(){
        cout << " i am inside destructor"<<endl;
    }
};







int main() {
    
//cout<< "Size of Empty Class is: " << sizeof(Animal) << endl;

//object Creation 

//static
// Animal dog;

// dog.name = "micky";
// dog.age = 12;

// cout <<" name of leo is:  " <<dog.name <<endl;
// cout <<" age of leo is:  " <<dog.age <<endl;

// cout << "dog weight :  " << dog.weight <<endl;

// dog.eat();
// dog.sleep();
// dog.setWeight(253);
// cout << "dog weight :  " << dog.getWeight() <<endl;


//dynamic memory creation

// Animal* cat = new Animal;

// (*cat).age = 15;
// (*cat).name = "billi";

//alternative dynamin memory Creation
// cat->age= 12;
// cat->name = "billu";

// cat->eat();
// cat->sleep();

// cout <<" name of animal is:  " <<cat.name <<endl;
// cout <<" age of animal is:  " <<cat.age <<endl;

// Animal a(32);
// Animal* b = new Animal(11,34);


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
