#include <iostream>
#include "Direction.hpp"
#include <string>
#include <stdexcept>
#include <unordered_map>

using namespace std;
using namespace ariel;


namespace ariel {
    class Notebook {
       unordered_map<int , unordered_map <int , string> > notebook ;  
    public :
        Notebook(); 
        void write(int const & page, int const & row, int const & col, Direction dir, string const & str);
        void erase(int page, int row, int col, Direction dir, int length);
        string read(int page, int row,  int col, Direction dir,  int length);
        void show(int page);

    };

};

