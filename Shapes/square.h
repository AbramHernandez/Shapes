// square.h

#ifndef SQUARE_H
#define SQUARE_H

#include "grid.h" 
#include "shape.h"  
#include <iostream>
#include <string>

using namespace std;

class Square: public Shape {
    public:
        // Constructor 
        Square(int xa, int ya, int sizea);
        // Draw overrides the virtual call from shape 
        void draw(Grid &grid);  
        //Deconstrucutor 
        virtual ~Square() {}; 
    private: 
        int m_size; // x and y origin 
};

#endif
