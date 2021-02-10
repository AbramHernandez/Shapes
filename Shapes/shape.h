// shape.h

#ifndef SHAPE_H
#define SHAPE_H

#include "grid.h" // MAYBE
#include <iostream>
#include <string>

using namespace std;

class Shape {
    public:
        // Constructor 
        Shape(int xa, int ya);
        // Draw 
        virtual void draw(Grid &grid) = 0; // pure virtual method
        // Deconstrucutor 
        virtual ~Shape() {};
        
    protected: 
        int m_x, m_y; // x and y origin 
};

#endif
