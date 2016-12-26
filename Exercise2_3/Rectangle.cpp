/*File:   Rectangle.cpp
 * Author: harris
 * Created on December 26, 2016, 11:46 AM
 */

#include "Rectangle.h"

// Constructors
Rectangle::Rectangle() {
    count++;
}

Rectangle::Rectangle(int w, int h) {
    set(w, h);
    count++;
}

//Rectangle::Rectangle(const Rectangle& orig) {
//}

// Destructor
Rectangle::~Rectangle() {
    cout << "Object " << count-- << " destroyed" << endl;
}

// Methods
void Rectangle::set(int w, int h) {
    width = w;
    height = h;
}

void Rectangle::setWidth(int w) {
    width = w;
}

void Rectangle::setHeight(int h) {
    height = h;
}

int Rectangle::getWidth() {
    return width;
}

int Rectangle::getHeight() {
    return height;
}

float Rectangle::calculateArea() {
    area = width*height;
    return area;
}

float Rectangle::calculatePerimeter() {
    perimeter = (width+height)*2;
    return perimeter;
}

void Rectangle::show() {
    cout << "Width: " << width << endl;
    cout << "height: " << height << endl;
    cout << "Area: " << calculateArea() << endl;
    cout << "Perimeter: " << calculatePerimeter() << endl;
    cout << "======================" << endl;
} 

int Rectangle::count;

int Rectangle::objCount() {
    return count;
}