/*
 * Name        : node.h
 * Author      : Deny Vugdalic
 * Description : Class Header File
 */
 
#include<iostream>
 
#ifndef NODE_H
#define NODE_H

using namespace std;

class Node {
    private:
        string value;
        
    public:
        Node* next_node;
        Node* set_next_node;
        Node* contents;
        Node* set_contents;
        Node(string value, Node* nextLocation){ //constructor
        this->value = value;
        this->next_node = nextLocation;
        }
        Node* next = NULL; //next = null
        ~Node(); //destructor
        Node* GetNext();
        Node* GetThing();

        
        
};
#endif