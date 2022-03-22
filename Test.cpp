/*
 * Unit testing for the Notebook
 * Ex2 - part A at cpp .
 *
 * by Yakov Khodorkovski
 */



#include <iostream>
#include <stdexcept>
#include <string>
#include "Direction.hpp"
#include "Notebook.hpp"
#include "doctest.h"


using namespace std ;
using namespace ariel;



TEST_CASE("good input"){
    Notebook note ;
    note.write(100,100,50,Direction::Horizontal,"ABCD");
    CHECK(note.read(100,100,50,Direction::Horizontal,4)=="ABCD");
    note.write(100,99,51,Direction::Vertical,"xyz");
    CHECK(note.read(100,99,51,Direction::Vertical,3)=="xyz");
    note.erase(100,100,51,Direction::Horizontal,2);
    CHECK(note.read(100,100,50,Direction::Horizontal,4)=="A~~D");
    CHECK(note.read(100,99,51,Direction::Vertical,3)=="x~z");




}

TEST_CASE("bad input"){





}