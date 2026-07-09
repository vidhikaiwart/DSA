#include <iostream>
#include <string>
using namespace std;

// Base class
class Animal {
public:
    int age;
    int weight;

    void eat() {
        cout << "Animal is eating" << endl;
    }

    void setAge(int a) {
        age = a;
    }

    int getAge() {
        return age;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }       

};

int main() {
    Dog d;

    d.setAge(5);            // ✅ Accessible
    cout << "Age: " << d.getAge() << endl; // ✅ Accessible
    d.eat();                // ✅ Accessible
    d.bark();               // ✅ Accessible

    return 0;
};