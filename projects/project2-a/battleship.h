/*
 * Name        : battleship.h
 * Author      : Deny Vugdalic
 * Description : Class Header File for Battleship Game
 */
 
#include<iostream>
#include<string>
#include<queue>
using namespace std;

#ifndef BATTLESHIP_H
#define BATTLESHIP_H

class Player {
    public:
        Player(); //constructor
        ~Player(); //destructor
        
    private:
        void printAttack(int grid);
};

class Human : public Player {
    public:
        Human(); //constructor
        ~Human(); //destructor
    private:
        void printAttack(int grid);
};

class Computer : public Player {
    public:
        Computer(); //constructor
        ~Computer(); //destructor
    private:
        void printAttack(int grid);
};

class gameBoard {
    public:
        gameBoard(); //constructor
        ~gameBoard(); //destructor
        string battleship;
        void printBoard(int grid);
        void printComputerBoard(int grid);
        void printAttack(int grid);
    private:
        string getshipLocation();
        string setshipLocation();
        void hitShip();
        void missShip();
        void sinkShip();
};

queue<string> computerAI;



void printBoard(int grid){
    
}

void printComputerBoard(int grid){
    
}

void printAttack(int grid){
    
}



#endif