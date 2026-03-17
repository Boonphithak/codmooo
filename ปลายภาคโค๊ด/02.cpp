#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream Myfile("ID name.txt");

    Myfile << "684244124 boonpitak"; 

    Myfile.close();
    return 0;
}