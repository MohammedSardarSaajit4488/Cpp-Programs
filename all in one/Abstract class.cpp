#include <iostream>

using namespace stdl;

class Shape {
public:
    virtual void draw() = 0;
};

class Rectangle : public Shape {
public:
    void draw() {
        cout << "Drawing a rectangle" <<endl;
    }
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing a circle" << endl;
    }
};

int main() {
    Shape* rectangle = new Rectangle();
    rectangle->draw();

    Shape* circle = new Circle();
    circle->draw();

    delete rectangle;
    delete circle;

    return 0;
}