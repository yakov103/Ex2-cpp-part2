#ifndef NOTEBOOK_H
#define NOTEBOOK_H


#include <iostream>
#include "Direction.hpp"
#include <string>
#include <stdexcept>


namespace ariel {
    class Notebook {
    public :
        Notebook(); // constractor
        void write(unsigned int page, unsigned int row, unsigned int col, Direction dir, std::string str);

        void erase(unsigned int page, unsigned int row, unsigned int col, Direction dir, std::string str);

        void show(unsigned int page, unsigned int row, unsigned int col, Direction dir, std::string str);

        std::string read(unsigned int page, unsigned int row, unsigned int col, Direction dir, std::string str);


    }

}


#endif NOTEBOOK_H