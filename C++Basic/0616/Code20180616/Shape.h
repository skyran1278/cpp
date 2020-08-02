#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>

class Shape {
public:
    Shape() { std::cout << "Shape::Shape()" << std::endl; }
    virtual void draw() const { std::cout << "Shape::draw()" << std::endl; }
};

class Circle : public Shape {
public:
    Circle() { std::cout << "Circle::Circle()" << std::endl; }
    void draw() const { std::cout << "Circle::draw()" << std::endl; }
};

class Triangle : public Shape {
public:
    Triangle() { std::cout << "Triangle::Triangle()" << std::endl; }
    void draw() const { std::cout << "Triangle::draw()" << std::endl; }
};

#endif