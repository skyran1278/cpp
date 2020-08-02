#include "Shape.h"

void display(const Shape& s){
    s.draw();
}

int main(){
    Shape* s = new Shape();
    display(*s);
    Shape* c = new Circle();
    display(*c);
    Shape* t = new Triangle();
    display(*t);
    return 0;
}