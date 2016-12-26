/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Rectangle.h
 * Author: harris
 *
 * Created on December 26, 2016, 11:46 AM
 */

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
using namespace std;


class Rectangle {
private:
    int width, height;
    float area, perimeter;
    static int count;
public:
    // Constructor Prototypes
    Rectangle();
    Rectangle(int w, int h);
    // Rectangle(const Rectangle& orig);
    
    // Destructor Prototypes
    virtual ~Rectangle();

    // Method Prototypes
    void set(int w, int h);
    void setWidth(int w);
    void setHeight(int h);
    
    int getWidth();
    int getHeight();
    
    float calculateArea();
    float calculatePerimeter();
    void show();
    static int objCount();

    
};

#endif /* RECTANGLE_H */

