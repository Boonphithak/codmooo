#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream Myfile("filename.txt");

    Myfile << "hah a rai a"; 

    Myfile.close();
    return 0;
}
