/*
 * Name        : linkedlist.h
 * Author      : Deny Vugdalic
 * Description : Class Header File
 */
 
 #include<iostream>
 using namespace std;
 
 #ifndef LINKEDLIST_H
 #define LINKEDLIST_H
 
 class Student {
     private:
        string firstName;
        string lastName;
        string id;
        string status;
        string unitsCompleted;
     public:
        Student(); //constructor
        ~Student(); //destructor
        //get
        //set
 };
 
 class Node {
     private:
        
     public:
        Node::Node(int init, Node* nextLocation){ //constructor
        this->value = init;
        this->nextNode = nextLocation;
        }
        Node(int value = 0, Node* next = nullptr)
        Node* next = NULL; //next = null
        ~Node(){ //destructor
         delete node;
        }
        delete next;
        Node* next = NULL; //next = null
        //constructor(thing)
        Node* next = NULL; //next = null
        //setNext(address)
        //next = address
        Node* GetNext(); //get next
        return *next;
        Node* GetThing(); //get thing
        
        
 };
 
 #endif