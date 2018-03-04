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

void LuhnAlg(string ccNum){
    int sum = 0;
    int digit = ccNum.length();
    int mod2 = digit%2;
    int i = 0;
    for(i = 0; i < digit-1;)
        int digit = ccNum[i];
    if(i%2 == mod2)
        digit = digit * 2;
    if(digit > 9)
        digit = digit - 9;
    sum = sum + digit;
   }
    
int main(){
    ifstream stream; //input file stream
    string ccNum; //string of credit card numbers
    stringstream ss ("cardnumbers");
    
    stream.open("creditcardnumbers.txt"); //opens the text file I created/
    if(!stream.is_open()){
        cout << "Error: could not open file" << endl;
        return 1;
    }
        
    while(getline (stream, ccNum)){ //while loop to read in the numbers
        ss << ccNum;
        cout << ccNum << endl; 
        
        if (ccNum.at(0) == '3' && (ccNum.at(1) == '4' || ccNum.at(1) == '7') && ccNum.length() == 15){ //checks the first 2 numbers to validate
            cout << "American Express" << endl;
        }
        else if(ccNum.at(0) == '6' && ccNum.at(1) == '0' && ccNum.at(2) == '1' && ccNum.at(3) == '1' && ccNum.length() == 16){ //checks the first 4 numbers to validate
            cout << "Discover" << endl;
        }
        else if(ccNum.substr(0,6) >= "622126" && ccNum.substr(0,6) <= "622925" && ccNum.length() == 16){ //checks the first 6 numbers and makes sure they are within a range
            cout << "Discover" << endl;
        }
        else if(ccNum.at(0) == '6' && ccNum.at(1) == '4' && (ccNum.at(2) == '4' || ccNum.at(2) == '5' || ccNum.at(2) == '6' || ccNum.at(2) == '7' || ccNum.at(2) == '8' || ccNum.at(2) == '9') && ccNum.length() == 16){ //checks the first 3 numbers to validate
            cout << "Discover" << endl;
        }
        else if(ccNum.at(0) == '6' && ccNum.at(1) == '5' && ccNum.length() == 16){ //checks the first 2 numbers to validate
            cout << "Discover" << endl;
        }
        else if(ccNum.at(0) == '5' && (ccNum.at(1) == '1' || ccNum.at(1) == '2' || ccNum.at(1) == '3' || ccNum.at(1) == '4' || ccNum.at(1) == '5') && ccNum.length() == 16){ // checks the first 2 numbers to validate
            cout << "MasterCard" << endl;
        }
        else if(ccNum.at(0) == '4' && (ccNum.length() == 13 || ccNum.length() == 14 || ccNum.length() == 15 || ccNum.length() == 16)){ //checks the first number to validate
            cout << "Visa" << endl;
        }
        else
            cout << "Unknown card type" << endl;
    }
    
    ifstream tstream; //input file stream
    string transact; //string of credit card numbers
    stringstream ts ("transactions");
    
    stream.open("transactions.txt"); //opens the text file I created/
    if(!stream.is_open()){
        cout << "Error: could not open file" << endl;
        return 1;
        
    }

        

    stream.close(); //close file when done
    
    return 0;



}