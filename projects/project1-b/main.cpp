/*
 * Name: Deny Vugdalic
 * Date: 2/14/2018
 * Description: This project reads in inputs from a text file.
 *              The text file contains strings of credit card numbers.
 *              The program then verifies that the credit card numbers contained in
 *              the text file are valid by using Luhn's Algorithm.
 */
 
#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

#include "project1b.h"

int main(){
    ifstream stream; //input file stream
    string fullInfo;
    string fullTransact;
    string ccNum;
    string firstName;
    string lastName;
    string ccType;
    string currentBalance;
    string date;
    string transactNum;
    string vendor;
    stringstream ss;
    
    stream.open("creditcardnumbers.txt"); //opens the text file I created/
    if(!stream.is_open()){
        cout << "Error: could not open file" << endl;
        return 1;
    }
        
    while(getline (stream, fullInfo)){ //while loop to read in the account info
        ss << fullInfo; //full string
        ss >> ccNum;
        ss >> firstName;
        ss >> lastName;
        ss >> ccType;
        ss >> currentBalance;
        cout << fullInfo << endl;
    }
    
    stream.close(); //close file when done
    
    ifstream tstream; //input file stream
    stringstream ts; //transactions
    
    tstream.open("transactions.txt"); //opens the text file I created
    if(!tstream.is_open()){
        cout << "Error: could not open file" << endl;
        return 1;
    }
    
    while(getline (tstream, fullTransact)){ //while loop to read in transaction info
    ts << fullTransact; //full string
    ts >> ccNum;
    ts >> date;
    ts >> transactNum;
    ts >> vendor;
        cout << fullTransact << endl;
    }

    stream.close(); //close file when done
    
    return 0;



}