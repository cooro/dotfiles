#include <iostream>
#include <fstream>

using namespace std;

int gameInit(ifstream & fin) {
    string fileloc;
    cout << "choose world file: ";
    cin >> fileloc;
    fin.open(fileloc);
    return 0;
}

int gameLoop(ifstream & fin) {
    int w, h;
    fin >> w >> h;
    char map[h][w];
    
    int i, j;
    for (i = 0; i < h; i++) {
        for (j = 0; j < w; j++) {
            fin >> map[i][j];
        }
    }
    
    for (i = 0; i < h; i++) {
        for (j = 0; j < w; j++) {
            cout << map[i][j];
        }
        cout << endl;
    }
}

int gameExit() {
    //TODO
}

int main() {
    ifstream fin;

    printf("Pixel\n----- ---\n");
    
    gameInit(fin);
    gameLoop(fin);
    return 0;
}
