#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    ofstream mhsFile;

    mhsFile.open("datamhs.txt");

    mhsFile << "Stambuk : 13020190096\n";
    mhsFile << "Nama : A. Anugrah Aqsa\n";
    mhsFile << "Kelas : A2\n";

    mhsFile.close();

}
