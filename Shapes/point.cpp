// point.cpp

#include "grid.h" 
#include "shape.h"  
#include "point.h" 


#include <iostream>
using namespace std;
// Store the x and y origin 

Point::Point(int xa, int ya, char symbola):Shape(xa,ya) 
{
    symbol = symbola;
    //Do nothing 
}

// Draw ? on (x,y) coordinate
void Point::draw(Grid &grid) 
{

    grid.set(m_x, m_y, symbol);

}


