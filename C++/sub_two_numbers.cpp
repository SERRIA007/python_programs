#include <iostream>
using namespace std;
int main(){
    int num1, num2, sub;
    
    // Asking for input
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    
    // Subtract two numbers
    sub = num1 - num2;
    
    // Display output
    cout << "The subtraction of two numbers = " << sub << endl;
    return 0;
}