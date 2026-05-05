#include <iostream>
#include <cmath>
using namespace std;

class Shape {
protected:
    string color;

public:
    Shape(const string& c) : color(c) {}
    virtual ~Shape() = default;

    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    string getColor() const { return color; }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(const string& c) : Shape(c), radius(0.0) {}

    void getData() {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
    }

    double area() const override {
        return 3.14 * radius * radius;
    }

    double perimeter() const override {
        return 2.0 * 3.14 * radius;
    }

    void display() const {
        cout << "Circle radius: " << radius << endl;
        cout << "Circle area: " << area() << endl;
        cout << "Circle perimeter: " << perimeter() << endl;
        cout << "Circle color: " << color << endl;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(const string& c) : Shape(c), length(0.0), width(0.0) {}

    void getData() {
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << "Enter the width of the rectangle: ";
        cin >> width;
    }

    double area() const override {
        return length * width;
    }

    double perimeter() const override {
        return 2.0 * (length + width);
    }

    void display() const {
        cout << "Rectangle length: " << length << ", width: " << width << endl;
        cout << "Rectangle area: " << area() << endl;
        cout << "Rectangle perimeter: " << perimeter() << endl;
        cout << "Rectangle color: " << color << endl;
    }
};

int main() {
    Circle c1("Yellow");
    c1.getData();
    c1.display();

    Rectangle r1("Red");
    r1.getData();
    r1.display();

    return 0;
}
