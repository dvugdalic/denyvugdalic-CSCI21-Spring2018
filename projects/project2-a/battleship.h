/*
 * Name        : battleship.h
 * Author      : Deny Vugdalic
 * Description : Class Header File for Battleship Game
 */
 
#include<iostream>
#include<string>
using namespace std;

#ifndef BATTLESHIP_H
#define BATTLESHIP_H

class Player {
    public:
        Player(); //constructor
        
    private:
};

class Human : public Player {
    public:
        Human(); //constructor
    private:
};

class Computer : public Player {
    public:
        Computer(); //constructor
    private:
};

class gameBoard {
    public:
        gameBoard(); //constructor
        string battleship;
    private:
        string getshipLocation();
        string setshipLocation();
        void hitShip();
        void missShip();
        void sinkShip();
};

#endif