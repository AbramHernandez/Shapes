// circle.h

#ifndef CIRCLE_H
#define CIRCLE_H

#include "grid.h" 
#include "shape.h"
#include "circle.h" 
#include <iostream>
#include <string>

using namespace std;

class Circle: public Shape {
    public:
        // Constructor 
        Circle(int xa, int ya);
        // Draw overrides the virtual call from shape 
        void draw(Grid &grid);  
        // Deconstrucutor 
        virtual ~Circle() {};
};

#endif
