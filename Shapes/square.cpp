// square.cpp

#include "grid.h"
#include "shape.h"  
#include "square.h"

#include <iostream>
using namespace std;

// Store the x and y origin 
Square::Square(int xa, int ya, int sizea):Shape(xa,ya) 
{
    m_size = sizea;  
}

// Draw square on grid
void Square::draw(Grid &grid) 
{
    // Top left corner = i 
    // Print to size
    for(int i = 0; i<m_size; i++) 
    {
        grid.set(m_x+i,m_y,'*');
        grid.set(m_x,m_y+i,'*');
        grid.set(m_x+(m_size-1), m_y+i, '*');
        grid.set(m_x+i,m_y+(m_size-1),'*');

    }
}
