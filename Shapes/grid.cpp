// grid.cpp

#include "grid.h"  
#include <iostream>

using namespace std;

// Constructor, initalize grid to all spaces
Grid::Grid() {
    for (int i=0; i<24; i++)  
    {
        for (int j=0; j<60; j++)  
        {
            m_grid[i][j] = ' '; 
        }
    }
}

// Shapes can set individual characters in grid 
void Grid::set(int x, int y, char c) 
{
    // Check if (x,y) are inside grid 
    if ((x < 60 && x > -1) && (y < 24 && y >-1)) 
    {  
        m_grid[y][x] = c;  
    }
    else {} // Nothing 

}

// Print 
void Grid::print()  
{
    for (int i=0; i<24; i++)
    {
        for (int j=0; j<60; j++) 
        {
            cout << m_grid[i][j]; 
        }
        cout << '\n'; 
    }
}

Grid::~Grid() {
    // Do nothing
}
