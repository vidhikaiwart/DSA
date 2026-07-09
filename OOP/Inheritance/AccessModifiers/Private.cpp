#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    int age;

    void setAge(int a) {
        age = a;
    }

    int getAge() {
        return age;
    }

    void eat() {
        cout << "Animal is eating" << endl;
    }
};

// Private Inheritance
class Dog : private Animal {
public:
    void dogInfo() {
        setAge(3);              // ✅ Accessible inside Dog
        cout << "Age: " << getAge() << endl;
        eat();                  // ✅ Accessible
    }

    void bark() {
        cout << "Dog is barking" << endl;
    }
};

int main() {

    Dog d;

    d.bark();
    d.dogInfo();

    // ❌ Error
    // d.setAge(5);
    // cout << d.getAge();
    // d.eat();

    return 0;
}