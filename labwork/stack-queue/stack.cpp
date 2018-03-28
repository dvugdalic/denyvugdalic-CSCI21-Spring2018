/*
 * Name        : stack.cpp
 * Author      : Deny Vugdalic
 * Description : Stack file for Lab 15
 */
 
#include<iostream>
using namespace std;
#include<stack>
#include<fstream>
 
int main(){
    stack <string> theStack;
    cout << "Hello! This program demonstrates how a stack works" << endl;
    ifstream inFile;
    inFile.open("stack.txt");
    string word;
    while(getline (inFile, word)){
        inFile >> word;
        theStack.push(word);
}
    inFile.close();
    
    //while(!theStack.empty()){
        //cout << theStack.top  << " " << endl;
        //theStack.pop();
    //}
}