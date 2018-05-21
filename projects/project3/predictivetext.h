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
        string prefix;
        float weight;
    private:
        void ascendingOrder(float weight);
        void descendingOrder(float weight);
        void ascendingR(float weight);
        void binarySearch(int arr[], int begin, int end, int x);
        void autoComplete();
};

void ascendingOrder(float weight){
    
}

void descendingOrder(float weight){
    
}

void ascending(float weight){ //ascending for r characters

}

void binarySearch(int arr[], int begin, int end, int x){// binary search algorithm
    if (end >= 1){
        int middle = 1 + (end - 1)/2; //middle is equal to the beginning plus the ending minus 1 all divided by 2
    if (arr[middle] == x) //if element is in the middle of the string
        return middle; //return the element
    if (arr[middle] > x) //smaller than middle = left
        return binarySearch(int arr,int begin, int mid-1, int x); //recursive call
        return binarySearch(int arr, int mid+1, int x); //recursive call
    }
    else
        return 1; //element is not in the array
}

void autoComplete(){
    
}