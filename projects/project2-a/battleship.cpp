/*
 * Name: Deny Vugdalic
 * Date: 3/4/18
 * Description: This project uses inheritance to create a hierarchy of
 *              classes for a battleship game. There is a human player and
 *              a computer player who go against each other and try to sink
 *              each others ships.
 */
 
#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

#include "battleship.h"

int main(){
    
    cout << "Hello, welcome to my Battleship game!"  << endl;
    cout << "This program reads in from a file and shows the player class of a battleship game." << endl;
    ifstream stream; //input file stream
    string battle;
    stringstream ss ("battleship");
    stream.open("battleship.txt"); //opens the text file I created for the board
    if(!stream.is_open()){
        cout << "Error: could not open file. Please try again or select another one." << endl;
        return 1;
    }
    
    cout << "Starting Game..." << endl;
    cout << "Please choose a square to attack." << endl;
    
        //if it's a miss
        cout << "You missed!" << endl;
        
        //if it's a hit
        cout << "You got a hit!" << endl;
        
        //if square does not exist
        cout << "That square does not exist. Please choose another one." << endl;
        
        //if invalid row OR column
        cout << "That square does not exist. Please choose another one." << endl;
        
        



}