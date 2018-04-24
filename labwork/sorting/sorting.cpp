#include<iostream>
using namespace std;

void bubbleSort(int array[], int x){ //void or int?
    if (x == 1)
        return 1;
    
    for (int i = 0; i < x-1; i++)
        if(array[i] > array[i+1])
            swap(array[1], array[i+1]);
            
    bubbleSort(array, x-1);
}

int main(){
    int array[] = {5, 9, 16, 2};
    int x =
    cout << "Bubblesort: " << bubbleSort(array, x) << endl;
}