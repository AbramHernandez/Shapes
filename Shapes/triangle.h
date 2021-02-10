// triangle.h

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "grid.h" 
#include "shape.h" 
#include "triangle.h" 
#include <iostream>
#include <string>

using namespace std;

class Triangle: public Shape {
    public:
        // Constructor 
        Triangle(int xa, int ya);
        // Draw overrides the virtual call from shape 
        void draw(Grid &grid);  
        // Deconstrucutor 
        virtual ~Triangle() {}; 
};

#endif
