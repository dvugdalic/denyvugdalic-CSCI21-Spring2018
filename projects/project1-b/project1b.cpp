/*
 * Name: Deny Vugdalic
 * Date: 2/14/2018
 * Description: This project reads in inputs from a text file.
 *              The text file contains strings of credit card numbers.
 *              The program then verifies that the credit card numbers contained in
 *              the text file are valid by using Luhn's Algorithm.
 */
 
#include<iostream>
#include<string>
using namespace std;

#include "project1b.h"

void LuhnAlg(string ccNum){
    int sum = 0;
    int digit = ccNum.length();
    int mod2 = digit%2;
    int i = 0;
    for(i = 0; i < digit-1;)
        int digit = ccNum[i];
    if(i%2 == mod2)
        digit = digit * 2;
    if(digit > 9)
        digit = digit - 9;
    sum = sum + digit;
   }

void Gold::setcreditLimit(const string ccType){
    string Gold;
    if(ccType == "Gold")
       double creditLimit = 1000.00; //set limit to $1,000
}

void Platinum::setcreditLimit(const string ccType){
    string Platinum;
    if(ccType == "Platinum")
        double creditLimit = 5000.00; //set limit to $5,000
}

void Corporate::setcreditLimit(const string ccType){
    string Corporate;
    if(ccType == "Corporate")
        double creditLimit = 10000.00; //set limit to $10,000
}

void Gold::setcreditOverdraft(const string ccType){
    if(ccType == "Gold")
        double creditOverdraft = 0.00; //does not allow for any overdraft
        
}

void Platinum::setcreditOverdraft(const string ccType){
    if(ccType == "Platinum")
        double creditOverdraft = 1000.00; //allows a $1,000 overdraft
}

void Corporate::setcreditOverdraft(const string ccType){
    if(ccType == "Corporate"){
        double creditOverdraft = 5000.00; //allows a $5,000 overdraft
    }
}

void Gold::setcreditRebate(const string ccType){
        if(ccType == "Gold"){
            float creditRebate = (purchaseAmount * 0.01); //credit rebate is equal to 1% of purchase amount
    }

}

void Platinum::setcreditRebate(const string ccType){
        string ccRebate;
        if(ccRebate == "Platinum"){
            float creditRebate = (purchaseAmount * 0.02); //credit rebate is equal to 2% of purchase amount
    }

}

void Corporate::setcreditRebate(const string ccType){
        string ccRebate;
        if(ccRebate == "Corporate"){
            float creditRebate = (purchaseAmount * 0.05); //credit rebate is equal to 5% of purchase amount
    }
}

void Gold::getBalance(double currentBalance){
    string ccType;
    if(ccType == "Gold"){
        currentBalance = purchaseAmount - creditRebate;
        cout << currentBalance;
    }
}

void Platinum::getBalance(double currentBalance){
    string ccType;
    if(ccType == "Platinum"){
        currentBalance = purchaseAmount - creditRebate;
        cout << currentBalance;
    }
}

void Corporate::getBalance(double currentBalance){
    string ccType;
    if(ccType == "Corporate"){
        currentBalance = purchaseAmount - creditRebate;
        cout << currentBalance;
    }
}

bool Gold::isBlocked(){
    if ((currentBalance + purchaseAmount) > creditLimit){ //if purchase plus existing balance is greater than the limit, deny the transaction
        return true;
    }
    else
        return false; //otherwise, allow the transaction
}

bool Platinum::isBlocked(){
    if((currentBalance + purchaseAmount) > creditLimit + 1000){ //if purchase plus existing balance is greater than the limit + 1000 for overdraft, deny the transaction
        return true;
    }
    else
        return false; //otherwise, allow the transaction
}

bool Corporate::isBlocked(){
    if((currentBalance + purchaseAmount) > creditLimit + 5000){ //if purchase plus existing balance is greater than the limit + 5000 for overdraft, deny the transaction
        return true;
    }
    else
        return false; //otherwise, allow the transaction
}

void Gold::denialReason(const string ccType){
    if ((ccType == "Gold") && (isBlocked() == true)){
        cout << "Your card has been denied. You have reached your limit." << endl;
    }
}

void Platinum::denialReason(const string ccType){
    if((ccType == "Platinum") && (isBlocked() == true)){
        cout << "Warning! You have reached your limit and any overdraft allowance. Your card will be denied." << endl;
    }
}

void Corporate::denialReason(const string ccType){
    if((ccType == "Corporate") && (isBlocked() == true)){
        cout << "Warning! You have reached your limit and any overdraft allowance. Your card will be denied." << endl;
    }
}

void Gold::accountSummary(const string ccType){
    string currentBalance;
    string purchaseAmount;
    string ccRebate;
    if(ccType == "Gold"){
        cout << currentBalance << endl;
        cout << purchaseAmount << endl;
        cout << ccRebate << endl;
    }
}