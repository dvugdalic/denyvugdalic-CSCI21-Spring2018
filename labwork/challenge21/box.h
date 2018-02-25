/*
 * Name        : box.h
 * Author      : Deny Vugdalic
 * Description : Creating a templated class
 */
 
#include<iostream>
using namespace std;

#ifndef BOX_H
#define BOX_H

template<typename T>
class Box {
    public:
    Box(template contents);
    void getContents;
    void setContents;
};

#endif