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

queue<string> myTournament;
enqueue<string> userID;
dequeue<string> player1;
dequeue<string> player2;
enqueue<sting> winner;



//void printBoard(int grid){
    //int grid[10][10] = {{A,B,C,D,E,F,G,H,I,J}, {0,1,2,3,4,5,6,7,8,9}};
//}

void printComputerBoard(int grid){
    
}

void printAttack(int grid){
    
}

//void printWinner(string player){
    //cout << winner.userID << endl;
//}

//void printLoser(string player){
    //cout << loser.userID << endl;
//}

void missShip(string battleship){
    
//}
#endif