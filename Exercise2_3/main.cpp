/* File:   main.cpp
 * Author: harris
 * Created on December 26, 2016, 11:45 AM
 */

#include <cstdlib>
#include <iostream>

#include "Rectangle.h"
using namespace std;

int main(int argc, char** argv) {
    Rectangle r1, r2, r3(5, 10), r4(12, 19);
    
    r1.set(2, 3);
    r2.setWidth(4);
    r2.setHeight(5);
    //////
    r4.set(5, 5);
    
    r1.show();
    r2.show();
    r3.show();
    
    cout << "Methods called on main" << endl;
    cout << "Width: " << r4.getWidth() << endl;
    cout << "height: " << r4.getHeight() << endl;
    cout << "Area: " << r4.calculateArea() << endl;
    cout << "Perimeter: " << r4.calculatePerimeter() << endl;
    cout << "======================" << endl;
    cout << "======================" << endl;
    
    cout << "Total Object Created: " << Rectangle::objCount() << endl;
    return 0;
}

