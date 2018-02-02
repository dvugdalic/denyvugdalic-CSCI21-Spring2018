#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

int main(){
    ifstream stream; //input file stream
    string ccNum; //string of credit card numbers
    stringstream ss ("cardnumbers");
    
    stream.open("creditcardnumbers.txt");
    if(!stream.is_open()){
        cout << "Could not open file" << endl;
        return 1;
    }
        
    while(getline (stream, ccNum)){ //while loop to read in the numbers
        ss << ccNum;
        cout << ccNum << endl;
    }
    stream.close(); //close file when done
    
    return 0;
    
}