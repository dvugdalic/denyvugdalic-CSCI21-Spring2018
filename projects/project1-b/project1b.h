/*
 * Name        : project1-b.h
 * Author      : Deny Vugdalic
 * Description : Class Header File
 */
 
#include<iostream>
#include<string>
using namespace std;

#ifndef PROJECT1B_H
#define PROJECT1B_H

class creditCard{
    public:
        creditCard(); //constructor
        string ccNum;
        string firstName;
        string lastName;
        double creditLimit;
        double currentBalance;
        double purchaseAmount;
        float creditRebate;
        int creditOverdraft;
        bool isBlocked(); //determines if the card will be denied
    private:
        
        
};

class goldCard : public creditCard {
    public:
        goldCard(); //constructor
        double creditLimit;
        double currentBalance;
        int creditRebate;
        bool isBlocked(); //determines if the card will be denied
        
    private:
        string getcreditType();
        void setcreditLimit(const string ccType);
        void setcreditOverdraft(const string ccType);
        void setcreditRebate(const string ccRebate);
        void getBalance(double currentBalance);
        void cardDenied(string denied);
};

class platinumCard : public creditCard {
    public:
        platinumCard(); //constructor
        double creditLimit;
        double currentBalance;
        int creditRebate;
        bool isBlocked(); //determines if the card will be denied
    
    private:
        string getcreditType();
        void setcreditLimit(const string ccType);
        void setcreditOverdraft(const string ccType);
        void setcreditRebate(const string ccRebate);
        void getBalance(double currentBalance);
        void cardDenied(string denied);
};

class corporateCard : public creditCard {
    public:
        corporateCard(); //constructor
        double creditLimit;
        double currentBalance;
        int creditRebate;
        bool isBlocked(); //determines if the card will be denied
    
    private:
        string getcreditType();
        void setcreditLimit(const string ccType);
        void setcreditOverdraft(const string ccType);
        void setcreditRebate(const string ccRebate);
        void getBalance(double currentBalance);
        void cardDenied(string denied);
};

class ccTransaction{
    public:
        string ccNum;
        string transactNum;
        double purchaseAmount;
        bool isBlocked();
    private:
        string date;
        string vendor;
        
};

#endif