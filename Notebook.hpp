#include <iostream>
#include "Direction.hpp"
#include <string>
#include <stdexcept>
using namespace std;
using namespace ariel;

namespace ariel {
    class Notebook {
    public :
        void write(int page, int row, int col, Direction dir, string str);
        void erase(int page, int row, int col, Direction dir, int length);
        string read(int page, int row,  int col, Direction dir,  int length);
        void show(int page);

    };

};

