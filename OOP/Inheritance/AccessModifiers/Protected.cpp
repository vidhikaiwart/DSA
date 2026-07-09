#include <iostream>
using namespace std;

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

class Dog : protected Animal {
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }

    void dogInfo() {
        setAge(5);              // ✅ Accessible inside Dog
        cout << "Age: " << getAge() << endl; // ✅ Accessible
        eat();                  // ✅ Accessible
    }
};

int main() {

    Dog d;

    d.bark();
    d.dogInfo();

    // ❌ Error
    // d.setAge(5);
    // cout << d.getAge();

    return 0;
}