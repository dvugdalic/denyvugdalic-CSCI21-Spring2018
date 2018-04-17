#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::string;

int sum(int n)
{
    if(n != 0)
        return n + sum(n - 1);
    return 0;
}

float multiplication(float x, float y) {
 
    //base condition of recursion
    if (y == 0)
        return 0;
 
    //call function recursively
    if (y > 0)
        return x + multiplication(x, y - 1);
 
    //if y is negative number
    if (y < 0)
        return -multiplication(x, -y);
}


int factorial(int x) {
    if (x == 0)
        return 1;
    if (x > 0)
        return x * factorial(x - 1);
}

bool wordIsPalindrome(string word){
    
}



int main() {
  cout<<"Sum: "<<sum(10)<<endl;
  cout<<"Multiply: " <<multiplication(10, 10)<<endl;
  cout<<"Factorial: " <<factorial(0) << endl;
  cout<<"Factorial: " <<factorial(6) << endl;
  return 0;
}