#include <iostream>
#include "Direction.hpp"
#include "Notebook.hpp"

using namespace std;


constexpr unsigned int MAX_ROW_LEN = 100;

namespace ariel {
    void checkErrors (unsigned int page, unsigned int row, unsigned int col);



    void Notebook::write(unsigned int page, unsigned int row, unsigned int col, Direction dir, string str) {
        //checkErrors(page,row,col);
        cout << "write "<< endl;
    }
    void Notebook::erase(unsigned int page, unsigned int row, unsigned int col, Direction dir, unsigned int leng) {
        //checkErrors(page,row,col);
        cout << "erase "<< endl;
    }

    void Notebook::show(unsigned int page) {
        //checkErrors(page,row,col);
        cout << "show "<< endl;
    }

    string Notebook::read(unsigned int page, unsigned int row, unsigned int col, Direction dir, unsigned int leng) {
        //checkErrors(page,row,col);
        return "read";
    }


    void checkErrors (unsigned int page, unsigned int row, unsigned int col){
        if (col >= MAX_ROW_LEN){
            throw runtime_error("max len of col is 100 ");
        }


    }














}





