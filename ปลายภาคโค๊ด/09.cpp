#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string A;

    cout << "input file name: ";
    cin >> A;
    
    ofstream MyWritefile(A);
    ofstream MyWritefile("filename.txt");

    MyWritefile << "file can be tricky , but it is fun enough!";

    MyWritefile.close();
    string Mygroup;
    cout << "input group: ";
    cin >> Mygroup;

    string Myfriend;
    int n =5;
    for (int i = 0; i < n; i++)
    {
        cout << "input friend: ";
        cin >> Myfriend;
    }

    MyWritefile.close();

    return 0;
}