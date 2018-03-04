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
        void setcreditOverdraft(const string ccOverdraft);
        void setcreditRebate(const string ccRebate);
        void getBalance(double currentBalance);
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
        void setcreditOverdraft(const string ccOverdraft);
        void setcreditRebate(const string ccRebate);
        void getBalance(double currentBalance);
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
        void setcreditOverdraft(const string ccOverdraft);
        void setcreditRebate(const string ccRebate);
        void getBalance(double currentBalance);
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

void goldCard::setcreditLimit(const string ccType){
    string goldCard;
    if(ccType == "goldCard")
       double creditLimit = 1000.00; //set limit to $1,000
}

void platinumCard::setcreditLimit(const string ccType){
    string platinumCard;
    if(ccType == "platinumCard")
        double creditLimit = 5000.00; //set limit to $5,000
}

void corporateCard::setcreditLimit(const string ccType){
    string corporateCard;
    if(ccType == "corporateCard")
        double creditLimit = 10000.00; //set limit to $10,000
}

void goldCard::setcreditOverdraft(const string ccOverdraft){
    if(ccOverdraft == "goldCard")
        int creditOverdraft = 0; //does not allow for any overdraft
        
}

void platinumCard::setcreditOverdraft(const string ccOverdraft){
    if(ccOverdraft == "platinumCard")
        int creditOverdraft = 1000; //allows a $1,000 overdraft
}

void corporateCard::setcreditOverdraft(const string ccOverdraft){
    if(ccOverdraft == "corporateCard"){
        int creditOverdraft = 5000; //allows a $5,000 overdraft
    }
}

void goldCard::setcreditRebate(const string ccRebate){
        if(ccRebate == "goldCard")
        float creditRebate = (purchaseAmount * 0.01); //credit rebate is equal to 1% of purchase amount
}

void platinumCard::setcreditRebate(const string ccRebate){
        if(ccRebate == "platinumCard")
        float creditRebate = (purchaseAmount * 0.02); //credit rebate is equal to 2% of purchase amount
}

void corporateCard::setcreditRebate(const string ccRebate){
        if(ccRebate == "corporateCard")
        float creditRebate = (purchaseAmount * 0.05); //credit rebate is equal to 5% of purchase amount
}

void goldCard::getBalance(double currentBalance){
    currentBalance = purchaseAmount - creditRebate;
    cout << currentBalance;
}

void platinumCard::getBalance(double currentBalance){
    currentBalance = purchaseAmount - creditRebate;
    cout << currentBalance;
}

void corporateCard::getBalance(double currentBalance){
    currentBalance = purchaseAmount - creditRebate;
    cout << currentBalance;
}

bool goldCard::isBlocked(){
    if ((currentBalance + purchaseAmount) > creditLimit){ //if purchase plus existing balance is greater than the limit, deny the transaction
        return true;
    }
    else
        return false; //otherwise, allow the transaction
}

bool platinumCard::isBlocked(){
    if((currentBalance + purchaseAmount) > creditLimit + 1000){ //if purchase plus existing balance is greater than the limit + 1000 for overdraft, deny the transaction
        return true;
    }
    else
        return false; //else, allow the transaction
}

bool corporateCard::isBlocked(){
    if((currentBalance + purchaseAmount) > creditLimit + 5000){ //if purchase plus existing balance is greater than the limit + 5000 for overdraft, deny the transaction
        return true;
    }
    else
        return false; //otherwise, allow the transaction
}

#endif