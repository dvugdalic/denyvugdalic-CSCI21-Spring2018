#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream num; //input file stream
    string ccNum; //string of credit card numbers
    
    num.open("creditcardnumbers.txt");
    if(!num.is_open()){
        return 1;
        
    while(!num.eof()){ //keep reading numbers until you've reached the end
        num >> ccNum;
    }
    num.close(); //close file when done
    }

}
