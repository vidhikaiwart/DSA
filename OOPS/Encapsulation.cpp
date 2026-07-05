#include <iostream>
#include <string>
using namespace std;

// Encapsulation means wrapping data and methods together
// and keeping data safe using private access.
class Animal {
private:
    // Private data members
    int age;
    int weight;
    string name;

public:
    // Constructor to initialize values
    Animal() : age(0), weight(0), name("") {}

    // Setter functions to set values safely
    void setAge(int a) {
        age = a;
    }

    void setWeight(int w) {
        weight = w;
    }

    void setName(string n) {
        name = n;
    }

    // Getter functions to access values safely
    int getAge() const {
        return age;
    }

    int getWeight() const {
        return weight;
    }

    string getName() const {
        return name;
    }

    // Public behavior function
    void eat() const {
        cout << name << " is eating" << endl;
    }
};

int main() {
    // Create an object of Animal
    Animal dog;

    // Set values using setter methods
    dog.setName("Buddy");
    dog.setAge(3);
    dog.setWeight(12);

    // Access values using getter methods
    cout << "Name: " << dog.getName() << endl;
    cout << "Age: " << dog.getAge() << endl;
    cout << "Weight: " << dog.getWeight() << endl;

    // Call public behavior method
    dog.eat();

    return 0;
}
