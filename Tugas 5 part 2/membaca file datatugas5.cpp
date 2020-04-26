
#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    ifstream myfile;

    myfile.open("datatugas5.txt", ios::app);

    
    string data;
    getline(myfile, data);
    cout << data << endl;   //menampilkan teks file

    myfile.close();

}
