#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    ofstream datamhs;

    datamhs.open("datamhs.txt");

    datamhs << "Stambuk : 13020190096\n";
    datamhs << "Nama : A. Anugrah Aqsa\n";
    datamhs << "Kelas : A2\n";
    datamhs << "IPK : 3,7";
    

    datamhs.close();

}
