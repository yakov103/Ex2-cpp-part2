#include "Notebook.hpp"
#include <map> 
#include <unordered_map>



constexpr unsigned int MAX_ROW_LEN = 100;

namespace ariel {



    Notebook::Notebook(){
     unordered_map<int , unordered_map <int , string> > notebook ;  
     this->notebook=notebook; 

    }

    /*

    write fucntion : 
    input : 
    page , row , col , DIRECT , string  

    if new Horizontal :
    write the string in to lane . and add the main notebook


    */
    void Notebook::write(int page, int row, int col, Direction dir, string const & str) {
        if (dir == Direction::Horizontal){
        unordered_map <int ,string> pageOfbook ;
        string t = "____________________________________________________________________________________________________";
        int strLengthOfWord = str.size();
        unsigned int colCopy = (unsigned int ) col ; 
        for (unsigned int i = colCopy ; i < col+strLengthOfWord ; i++){ 
              t.at(i)=str.at(i-colCopy); 
        }
        pageOfbook.insert(pair<int ,string>(row,t)); 
        cout << pageOfbook.at(row) << endl; 
       this->notebook.insert(pair<int,unordered_map<int,string> >(page,pageOfbook));
        cout << this->notebook.at(page).at(row) << endl; 
        }
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





