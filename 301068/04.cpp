#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main(){

    char op;
    float num1, num2, res; 

    cout << "Enter operator : +,-,*,/" << endl;
    cin >> op;

    cout << "Enter two numbers : " << endl;
    cin >> num1 >> num2;

    if (op == '+')
        res = num1 + num2;
    else if (op == '-')
        res = num1 - num2;
    else if (op == '*')
        res = num1 * num2;
    else if (op == '/') 
        if (num2 == 0) 
            
    
     else {
        cout << "Error! Operator is not correct" << endl;
        res = -DBL_MAX;
    }

    if (res != -DBL_MAX)
        cout << num1 << " " << op << " " << num2 << " = " << res << endl;
    return 0;
}