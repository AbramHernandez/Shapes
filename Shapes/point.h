// point.h

#ifndef POINT_H
#define POINT_H

#include "grid.h" 
#include "shape.h"
#include "point.h" 
#include <iostream>
#include <string>

using namespace std;

class Point: public Shape {
    public:
        // constructor 
        Point(int xa, int ya, char symbola);
        // Draw overrides the virtual call from shape 
        void draw(Grid &grid);  
        // Deconstrucutor 
        ~Point() {};
    protected: 
        char symbol;
};

#endif
