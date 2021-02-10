// circle.cpp

#include "grid.h" 
#include "shape.h"  
#include "circle.h"


#include <iostream>
using namespace std;

// Store the x and y origin 
Circle::Circle(int xa, int ya):Shape(xa,ya) 
{
    //Do nothing 
}

// Draw Circle on grid
void Circle::draw(Grid &grid) 
{
    // Find top left corner 

    for(int i=0; i<5; i++)
    {
        if (i==1){
            grid.set(m_x+1, m_y, 'o');
            grid.set(m_x+2, m_y, 'o'); 
        }
        if (i==2){
            grid.set(m_x, m_y+1, 'o');
            grid.set(m_x+3, m_y+1, 'o');
        }
        if (i==3){
            grid.set(m_x, m_y+2, 'o');
            grid.set(m_x+3, m_y+2, 'o');
        }

        if (i==4){
            grid.set(m_x+1, m_y+3, 'o');
            grid.set(m_x+2, m_y+3, 'o');
        }
    }
}
