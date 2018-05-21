/*
 * Name        : battleship.h
 * Author      : Deny Vugdalic
 * Description : Class Header File for Battleship Game
 */
 
#include<iostream>
#include<string>
#include<queue>
#include<algorithm>
using namespace std;

#ifndef PREDICTIVETEXT_H
#define PREDICTIVETEXT_H

class Autocomplete{
    public:
        Autocomplete();
        ~Autocomplete();
        string string;
        float weight;
    private:
        void ascendingOrder();
        void descendingOrder();
        void ascendingR();
};

void ascendingOrder(){
    
}