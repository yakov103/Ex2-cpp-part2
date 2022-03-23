#include "Notebook.hpp"


constexpr unsigned int MAX_ROW_LEN = 100;

namespace ariel {

    void Notebook::write(int page, int row, int col, Direction dir, string const & str) {

    }
    void Notebook::erase( int page, int row, int col, Direction dir, int length) {

    }
    string Notebook::read(int page, int row, int col, Direction dir, int length) {
        this->show(MAX_ROW_LEN); // only to get from tidy clear test
     return "";
    }

    void Notebook::show(int page) {
    }




}





