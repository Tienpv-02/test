#include <iostream>
#include <fstream>
#include <string>
#include <string.h>

using namespace std;
int main()
{   string xau;
    char s;
    ifstream filein("xau.inp",ios_base :: in);
    ofstream fileout("xau.out",ios_base :: out);
    while(!filein.eof())
    {
        char c;
        filein.get(c);
        xau+=c;
    }
    strrev(xau);
    fileout<<s<<" ";

    fileout<<xau[3];
    filein.close();
    fileout.close();
}
