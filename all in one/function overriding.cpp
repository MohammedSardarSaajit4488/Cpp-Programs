#include <iostream>
using namespace std;
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Meow" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Woof" << endl;
    }
};

int main() {
    Animal* cat = new Cat();
    cat->sound();  // Output: Meow

    Animal* dog = new Dog();
    dog->sound();  // Output: Woof

    delete cat;
    delete dog;

    return 0;
}
