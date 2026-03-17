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

    string mytext1 = "file can be tricky , but it is fun enough!1";
    string mytext2 = "file can be tricky , but it is fun enough!2";

    MyWritefile << mytext1;
    MyWritefile << mytext2;

    MyWritefile.close();
    

    string myText;
    ifstream MyReadFile("filename.txt");
    while (getline(MyReadFile, myText))
    {
        cout << myText;
    }
    MyReadFile.close();
    return 0;
}