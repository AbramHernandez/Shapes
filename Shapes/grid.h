// grid.h

#ifndef GRID_H
#define GRID_H

#include <iostream>
#include <string>

using namespace std;

class Grid {
    public:
        // Constructor 
        Grid(); 
        void set(int x, int y, char c); 
        // Outout 
        void print(); 
        //Destructor
        ~Grid(); 
           

    private: 
        char m_grid[24][60]; // 24 is height or column and 60 is width rows
};

#endif
