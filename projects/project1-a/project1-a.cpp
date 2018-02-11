/*
 * Name: Deny Vugdalic
 * Date: 1/30/18
 * Description: This project reads in inputs from a text file.
 *              The text file contains strings of credit card numbers.
 *              The program then verifies that the credit card numbers contained in
 *              the text file are valid by using Luhn's Algorithm.
 */
 
#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

/*
void LuhnAlg(string ccNum){
    int sum = 0;
    int digit;
    int mod;
    for (int i = 0;)
    if(i%2 = mod)
        digit = digit * 2;
    if(digit > 9)
        digit = digit - 9;
    sum = sum + digit;
    }
    return sum%10;
*/

int main(){
    ifstream stream; //input file stream
    string ccNum; //string of credit card numbers
    stringstream ss ("cardnumbers");
    
    stream.open("creditcardnumbers.txt");
    if(!stream.is_open()){
        cout << "Error: could not open file" << endl;
        return 1;
    }
        
    while(getline (stream, ccNum)){ //while loop to read in the numbers
        ss << ccNum;
        cout << ccNum << endl;
    
}
    stream.close(); //close file when done
    
    return 0;



}