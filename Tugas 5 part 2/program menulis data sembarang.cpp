#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream myfile;

    myfile.open("datatugas5.txt");

    
    myfile << "This is my program!";
	myfile.close();

}
