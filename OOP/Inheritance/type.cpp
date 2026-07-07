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

// Single level inheritance: Dog inherits from Animal
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }
};

// Multilevel inheritance: Puppy inherits from Dog, which inherits from Animal
class Puppy : public Dog {
public:
    void weep() {
        cout << "Puppy is weeping" << endl;
    }
};

// Hierarchical inheritance: Cat inherits from Animal too
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat is meowing" << endl;
    }
};

// Example of multiple inheritance
class Parrot {
public:
    string name;

    void fly() {
        cout << "Parrot is flying" << endl;
    }
};

class FlyingDog : public Dog, public Parrot {
public:
    void display() {
        cout << "FlyingDog name: " << name << endl;
    }
};

int main() {
    cout << "Types of Inheritance in C++" << endl;

    Dog d;
    d.setAge(5);
    cout << "Dog age: " << d.getAge() << endl;
    d.eat();
    d.bark();

    cout << endl;

    Puppy p;
    p.setAge(1);
    cout << "Puppy age: " << p.getAge() << endl;
    p.eat();
    p.bark();
    p.weep();

    cout << endl;

    Cat c;
    c.setAge(3);
    cout << "Cat age: " << c.getAge() << endl;
    c.eat();
    c.meow();

    cout << endl;

    FlyingDog f;
    f.name = "Sky";
    f.setAge(4);
    cout << "FlyingDog age: " << f.getAge() << endl;
    f.eat();
    f.bark();
    f.fly();
    f.display();

    return 0;
}
