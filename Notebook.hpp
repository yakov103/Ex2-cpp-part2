#ifndef NOTEBOOK_H
#define NOTEBOOK_H


#include <iostream>
#include "Direction.hpp"
#include <string>
#include <stdexcept>
using namespace std;

namespace ariel {
    class Notebook {
    public :
         // constructor
        void write(unsigned int page, unsigned int row, unsigned int col, Direction dir, string str);

        void erase(unsigned int page, unsigned int row, unsigned int col, Direction dir, unsigned int leng);

        void show(unsigned int page);

        string read(unsigned int page, unsigned int row, unsigned int col, Direction dir, unsigned int leng);


    }

}


#endif NOTEBOOK_H