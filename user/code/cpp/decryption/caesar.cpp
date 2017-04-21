#include <iostream>
#include <fstream>

using namespace std;



int main(int argc, char *argv[])
{
    char in;
    int x;
    ifstream fin;
    
    cout << "Decrypter: CAESAR\n\n";
    
    for (x = 0; x < 26; x++) {
        cout << "Shift: " << x << "\n####################\n";
        fin.open(argv[1]);
        while (fin.get(in)) {
            if (isupper(in)) {
                in = in + x;
                if (!isupper(in)) in = in - 26;
            } else if (islower(in)) {
                in = in + x;
                if (!islower(in)) in = in - 26;
            }
            cout << in;
        }
        fin.close();
        cout << "####################\n\n";
        getchar();
    }
    return 0;
}
