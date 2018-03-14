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

void goldCard::setcreditOverdraft(const string ccType){
    if(ccType == "goldCard")
        int creditOverdraft = 0; //does not allow for any overdraft
        
}

void platinumCard::setcreditOverdraft(const string ccType){
    if(ccType == "platinumCard")
        int creditOverdraft = 1000; //allows a $1,000 overdraft
}

void corporateCard::setcreditOverdraft(const string ccType){
    if(ccType == "corporateCard"){
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
        return false; //otherwise, allow the transaction
}

bool corporateCard::isBlocked(){
    if((currentBalance + purchaseAmount) > creditLimit + 5000){ //if purchase plus existing balance is greater than the limit + 5000 for overdraft, deny the transaction
        return true;
    }
    else
        return false; //otherwise, allow the transaction
}
