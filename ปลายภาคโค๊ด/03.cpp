#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream MyWritefile("filename.txt");

    MyWritefile << "file can be tricky , but it is fun enough!";

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