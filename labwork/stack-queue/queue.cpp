/*
 * Name        : queue.cpp
 * Author      : Deny Vugdalic
 * Description : Queue file for Lab 15
 */
 
#include<iostream>
using namespace std;
#include<queue>
#include<fstream>
 
int main(){
    queue <string> theQueue;
    cout << "Hello! This program demonstrates how a queue works" << endl;
    ifstream inFile;
    inFile.open("queue.txt");
    string sentence;
    while(getline (inFile, sentence)){
        inFile >> sentence;
        cout << sentence << endl;
}
    inFile.close();
    
    //while(!theStack.empty()){
        //cout << theStack.top  << " " << endl;
        //theStack.pop();
    //}
}