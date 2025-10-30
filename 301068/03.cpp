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
    cin >> num1 
    cout << "Enter operator : +,-,*,/" << endl;
    cin >> op;
    cout << "Enter  numbers : " << endl;
    cin >> num2;

    switch(op){

        case '+':
            result = num1 + num2;
            cout << num1 << " + " << num2 << " = " << result << endl;
            break;

        case '-':
            result = num1 - num2;
            cout << num1 << " - " << num2 << " = " << result << endl;
            break;

        case '*':
            result = num1 * num2;
            cout << num1 << " * " << num2 << " = " << result << endl;
            break;

        case '/':
            result = num1 / num2;
            cout << num1 << " / " << num2 << " = " << result << endl;
            break;
        
        default:
            cout << "Error i dum" << endl;
            break;

    }
    if (result != -DBL_MAX)
        cout << "Result: " << result << endl;
    return 0;

}