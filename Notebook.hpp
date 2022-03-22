#include <iostream>
#include "Direction.hpp"
#include <string>
#include <stdexcept>
using namespace std;
using namespace ariel;

namespace ariel {
    class Notebook {
    public :
        void write(unsigned int page, unsigned int row, unsigned int col, Direction dir, string str);
        void erase(unsigned int page, unsigned int row, unsigned int col, Direction dir, unsigned int leng);
        void show(unsigned int page);
        string read(unsigned int page, unsigned int row, unsigned int col, Direction dir, unsigned int leng);


    };

};

