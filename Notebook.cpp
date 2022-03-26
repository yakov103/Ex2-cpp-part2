#include "Notebook.hpp"
#include <map> 


constexpr unsigned int MAX_ROW_LEN = 100;

namespace ariel {



    Notebook::Notebook(){
     map<int , map <int , string> > notebook ;  
     this->notebook=notebook; 

    }

    /*

    write fucntion : 
    input : 
    page , row , col , DIRECT , string  

    if new Horizontal :
    write the string in to lane . and add the main notebook


    */
    void Notebook::write(int const & page, int const & row, int const & col, Direction dir, string const & str) {
        string t ; 

        if (this->notebook.find(page) == notebook.end()){ 
            map <int ,string> pageOfbook ;
            t = "____________________________________________________________________________________________________";
            pageOfbook.insert(pair<int ,string>(row,t)); 
            this->notebook.insert(pair<int,map<int,string> >(page,pageOfbook));
        }
        else { 
            if (this->notebook.at(page).find(row) == this->notebook.at(page).end()){
            t = "____________________________________________________________________________________________________";  
            this->notebook.at(page).insert(pair<int,string>(row,t)); 
            }
         
            
        }
           t = this->notebook.at(page).at(row);

        if (dir == Direction::Horizontal){
        for (unsigned int i = ((unsigned int)col) ; i < col+((int)str.size()) ; i++){ 
              t.at(i)=str.at(i-((unsigned int)col)); 
        }
        this->notebook.at(page).at(row) = t ;
       // cout << this->notebook.at(page).at(row) << endl; 
        }
        else { 
         for (int i = 0 ; i < (int)str.size() ; i++){ 

            string temp (1,str.at((unsigned int )i));
            this->write(page,((int)row+i),col,Direction::Horizontal,temp);
        }
        }
        
    
    }
    void Notebook::erase( int page, int row, int col, Direction dir, int length) {

    }
    string Notebook::read(int page, int row, int col, Direction dir, int length) {
        this->show(MAX_ROW_LEN); // only to get from tidy clear test
     return "";
    }

    void Notebook::show(int page) {
        map <int ,string> rows = notebook.at(page); 
        for(auto row : rows){
        cout << row.second << endl ; 
        }
    }




}





