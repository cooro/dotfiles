#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    char ch;
    ofstream fout;
    fout.open(argv[1]);
    while(ch != '~') {
        cin.get(ch);
        fout << ch;
    }
    fout.close();
    return 0;
}
