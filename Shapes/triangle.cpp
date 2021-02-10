// triangle.cpp

#include "grid.h" 
#include "shape.h"  
#include "triangle.h" 


#include <iostream>
using namespace std;

// Store the x and y origin 
Triangle::Triangle(int xa, int ya):Shape(xa,ya) 
{
    //Do nothing 
}

void Triangle::draw(Grid &grid) 
{
    for(int i=0; i<4; i++) 
    {
        if (i==1){
            grid.set(m_x+2, m_y, '+'); 
        }
        if (i==2){
            grid.set(m_x+1, m_y+1, '+');
            grid.set(m_x+3, m_y+1, '+');
        }
        if (i==3){
            grid.set(m_x, m_y+2, '+');
            grid.set(m_x+1, m_y+2, '+');
            grid.set(m_x+2, m_y+2, '+');
            grid.set(m_x+3, m_y+2, '+');
            grid.set(m_x+4, m_y+2, '+');
        }
    }
}
