/*
 * Name: Deny Vugdalic
 * Date: 5/15/18
 * Description: 
 *              
 *              
 *              
 */
 
#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

int main(){
    ifstream stream; //input file stream
    string string; //string of strings
    stringstream ss ("predictive");
    
    stream.open("predictivetext.txt"); //opens the text file I created/
    if(!stream.is_open()){
        cout << "Error: could not open file" << endl;
        return 1;
    }
    
        while(getline (stream, string)){
        ss << string;
        cout << string << endl;