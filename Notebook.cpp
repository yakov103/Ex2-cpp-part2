#include "Notebook.hpp"
#include <map> 


constexpr unsigned int MAX_ROW_LEN = 100;

namespace ariel {
     void minusValuesCheck (int const & page , int const & row , int const & col,string const & str);
   void minusValuesCheck (int const & page , int const & row , int const & col, int const & length  );


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
        minusValuesCheck(page,row,col,str); 
        string t ; 
        if (this->notebook.find(page) == notebook.end()){ 
            map <int ,string> pageOfbook ;
            t = string (MAX_ROW_LEN,'_');
            pageOfbook.insert(pair<int ,string>(row,t)); 
            this->notebook.insert(pair<int,map<int,string> >(page,pageOfbook));
        }
        else { 
            if (this->notebook.at(page).find(row) == this->notebook.at(page).end()){
            t = string (MAX_ROW_LEN,'_'); 
            this->notebook.at(page).insert(pair<int,string>(row,t)); 
            }
         
        }
           t = this->notebook.at(page).at(row);

        if (dir == Direction::Horizontal){
            int lengthOfString = str.size(); 
            if (MAX_ROW_LEN < col+lengthOfString){
                throw runtime_error ("you cannot overWrite after 100 col !"); 
            }; 
        for (unsigned int i = ((unsigned int)col) ; i < col+((int)str.size()) ; i++){ 
            if (t.at(i) != '_'){
                throw runtime_error("you cannot overwrite !!!"); 
            }

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
        minusValuesCheck(page,row,col,length); 
        string t ; 
        if (this->notebook.find(page) == notebook.end()){ 
            map <int ,string> pageOfbook ;
            t = string (MAX_ROW_LEN,'_');
            pageOfbook.insert(pair<int ,string>(row,t)); 
            this->notebook.insert(pair<int,map<int,string> >(page,pageOfbook));
        }
        else { 
            if (this->notebook.at(page).find(row) == this->notebook.at(page).end()){
            t = string (MAX_ROW_LEN,'_'); 
            this->notebook.at(page).insert(pair<int,string>(row,t)); 
            }
         
        }
           t = this->notebook.at(page).at(row);

        if (dir == Direction::Horizontal){
        for (unsigned int i = ((unsigned int)col) ; i < col+((int)length) ; i++){ 
              t.at(i)='~';
        }
        this->notebook.at(page).at(row) = t ;
       // cout << this->notebook.at(page).at(row) << endl; 
        }
        if (dir == Direction::Vertical) { 
         for (int i = 0 ; i < (int)length ; i++){  
            this->erase(page,((int)row+i),col,Direction::Horizontal,1);
        }
        }
        

    }
    string Notebook::read(int page, int row, int col, Direction dir, int length) {
    minusValuesCheck(page,row,col,length);
     string resulat; 
    if ( this->notebook.find(page) != notebook.end()){
        if (dir == Direction::Horizontal ){ 
            if (this->notebook.at(page).find(row) != this->notebook.at(page).end()){
            resulat = this->notebook.at(page).at(row); 
            resulat = resulat.substr((unsigned int)col,(unsigned int)length); 
            cout << resulat << endl; 
            }
            else {
                 for (int i = 0 ; i < length ; i ++){ 
            resulat += "_"; 
        }
            }

        }
        else { 
            for ( int i = 0 ; i < length ; i++){ 
                resulat += this->read(page,((int)row+i),col , Direction::Horizontal,1); 
            }
        }// ts
        


    }
    else { 
        for (int i = 0 ; i < length ; i ++){ 
            resulat += "_"; 
        }
    }
    
     return resulat;
    }

    void Notebook::show(int page) {
        if ( page < 0 ){
        throw runtime_error("no negative page !"); 
        }
        map <int ,string> rows = notebook.at(page); 
        for(auto const & row : rows){
        cout << row.second << endl ; 
        }
    }

    void minusValuesCheck (int const & page , int const & row , int const & col,string const & str ){
    if (page < 0 || row < 0 || col < 0 ){ 
        throw runtime_error ( "no nagetive values on bored !!"); 
    }
    

    } 
    void minusValuesCheck (int const & page , int const & row , int const & col, int const & length  ){
         if (page < 0 || row < 0 || col < 0 || length < 0  ){ 
        throw runtime_error ( "no nagetive values on bored !!"); 
    }

        if (MAX_ROW_LEN < col+length ){
            throw runtime_error("cannot overflow the notebook ! "); 
        }
    } 




}





