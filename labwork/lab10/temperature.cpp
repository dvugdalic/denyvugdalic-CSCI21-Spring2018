/*
 * Name        : temperature.cpp
 * Author      : Deny Vugdalic
 * Description : .cpp file for temperature
*/
#include "temperature.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Temperature::Temperature(double kelvin){
    
}

void Temperature::SetTempFromKelvin(double kelvin){

    kelvin_ = kelvin;
}

void Temperature::SetTempFromCelsius(double celsius){
    
    kelvin_ = celsius + 273.15;
}

void Temperature::SetTempFromFahrenheit(double fahrenheit){
    
    kelvin_ = (5.0 * (fahrenheit - 32) / 9) + 273.15;
}

double Temperature::GetTempAsKelvin() const{
    return kelvin_;
}

double Temperature::GetTempAsCelsius() const{
    
    return kelvin_ - 273.15;
}

double Temperature::GetTempAsFahrenheit() const{
    
    return ((kelvin_ - 273.15) * 9.0 / 5) + 32;
}

string Temperature::ToString(char unit) const{
    }

int main(){
    Temperature celcius(32);
    Temperature fahrenheit(80);
    
}