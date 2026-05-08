#include <iostream>
#include <vector>
using namespace std;

class Shape {
public:
    virtual double area() = 0;
    virtual ~Shape() {}               // Virtual destructor
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    
    double area() override {
        return 3.14159 * radius * radius;
    }
    
    void display() {
        cout << "The area of the circle is: " << area() << endl;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    
    double area() override {
        return length * width;
    }
    
    void display() {
        cout << "The area of the rectangle is: " << area() << endl;
    }
};

int main() {
    vector<Shape*> shapes = {
        new Circle(3.0),
        new Rectangle(3.0, 4.0)
    };

    for (Shape* s : shapes) {
        cout << "Area = " << s->area() << endl;
        // s->display();     // You can call this too if you want
        delete s;
    }

    return 0;
}