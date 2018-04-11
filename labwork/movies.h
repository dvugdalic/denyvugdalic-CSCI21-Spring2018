/*
 * Name        : movies.h
 * Author      : Deny Vugdalic
 * Description : Class Header File
 */
 
 #include<iostream>
 using namespace std;
 
 #ifndef MOVIES_H
 #define MOVIES_H
 
 class HashTable {
     public:
     HashTable();
     ~HashTable();
     private:
     string movie;
     string firstName;
     string LastName;
 }
 
 //still need to do more research to figure out how to write a hash table class
 
 
 int main(){
    ifstream stream; //input file stream
    string hash; //
    stringstream ht ("movies");
    
    stream.open("movies.txt"); //opens the text file I created/
    if(!stream.is_open()){
        cout << "Error: could not open file" << endl;
        return 1;
    }
 