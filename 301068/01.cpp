#include <iostream>

using namespace std;

int main(){

    char op;
    float num1, num2, result;  

    cout << "Enter operator : +,-,*,/" << endl;
    cin >> op;

    cout << "Enter two numbers : " << endl;
    cin >> num1 >> num2;

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
            if (num2 == 0) {
                cout << "Error: Cannot divide by zero!" << endl;
            } else {
                result = num1 / num2;
                cout << num1 << " / " << num2 << " = " << result << endl;
            }
            break;
        
        default:
            cout << "Error: Invalid operator" << endl;
            break;
    }
    
    return 0;
}