/*
 * Name: Deny Vugdalic
 * Date: 2/10/18
 */
#include "fruits.h"
#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;



void WordList::clear(){
    
}

/*(bool WordList::newAllowDupes(){
    
}

bool WordList::addWord(){
    
}

bool WordList::removeWord(){
    
}

bool WordList::hasWord(){
    
}
*/
//wasn't sure how to make these work

int main(){
    ifstream stream; //input file stream
    string list; //string of fruits
    stringstream ss ("fruits");
    
    stream.open("fruits.txt");
    if(!stream.is_open()){
        cout << "Error: could not open file" << endl;
        return 1;
    }
        
    while(getline (stream, list)){ //while loop to read in the numbers
        ss << list;
        cout << list << endl;
    }
    
cout << "Enter another fruit" << endl;
    int fruit;
    cin >> fruit;


    stream.close(); //close file when done
    
    return 0;
}