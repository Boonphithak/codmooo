#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main(){

    char op;
    float num1, num2, result; 

    cout << "Enter operator : +,-,*,/" << endl;
    cin >> op;

    cout << "Enter  numbers : " << endl;
    cin >> num1;
    cout << "Enter  numbers : " << endl;
    cin >> num2;

    switch(op){

        case '+':
            result = num1 + num2;
            
            break;

        case '-':
            result = num1 - num2;
            
            break;

        case '*':
            result = num1 * num2;
            
            break;

        case '/':
            result = num1 / num2;
            
            break;
        
        default:
            cout << "Error i dum" << endl;
            result = -DBL_MAX;
            break;

    }
    if (result != -DBL_MAX)
        cout << "Result: " << result << endl;
        cout << num1 << op << num2 << " = " << result << endl;
    return 0;

}