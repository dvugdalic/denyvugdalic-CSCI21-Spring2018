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
        string denied;
        double creditLimit;
        double currentBalance;
        double purchaseAmount;
        float creditRebate;
        int creditOverdraft;
        bool isBlocked(); //determines if the card will be denied
    private:
        
        
};

class Gold : public creditCard {
    public:
        Gold(); //constructor
        double creditLimit;
        double currentBalance;
        int creditRebate;
        bool isBlocked(); //determines if the card will be denied
        void denialReason(const string ccType);
        void accountSummary(const string ccType);
        
    private:
        string getcreditType();
        void setcreditLimit(const string ccType);
        void setcreditOverdraft(const string ccType);
        void setcreditRebate(const string ccType);
        void getBalance(double currentBalance);
        void cardDenied(string denied);
};

class Platinum : public creditCard {
    public:
        Platinum(); //constructor
        double creditLimit;
        double currentBalance;
        int creditRebate;
        bool isBlocked(); //determines if the card will be denied
        void denialReason(const string ccType);
    
    private:
        string getcreditType();
        void setcreditLimit(const string ccType);
        void setcreditOverdraft(const string ccType);
        void setcreditRebate(const string ccType);
        void getBalance(double currentBalance);
        void cardDenied(string denied);
};

class Corporate : public creditCard {
    public:
        Corporate(); //constructor
        double creditLimit;
        double currentBalance;
        int creditRebate;
        bool isBlocked(); //determines if the card will be denied
        void denialReason(const string ccType);
    
    private:
        string getcreditType();
        void setcreditLimit(const string ccType);
        void setcreditOverdraft(const string ccType);
        void setcreditRebate(const string ccType);
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