#include <iostream>
#include <vector>
#include "minemap.h"

using namespace std;

void settings(minemap & map);
void initMap(minemap & map);
void displayMap(minemap map);
void selectTile(minemap map);

int main()
{
    minemap map;

    settings(map);
    initMap(map);
    displayMap(map);
    selectTile(map);
    return 0;
}

void settings(minemap & map)
{
    cout << "settings() started\n";
    int x, y;
    cout << "How wide should the map be?(max is 256): ";
    cin >> x;
    cout << "How tall should the map be?(max is 256): ";
    cin >> y;
    map.setX(x);
    map.setY(y);
}
void initMap(minemap & map)
{
    int i, j, randx, randy, d;
    
    /** seed the random number generator */
    srand(time(NULL));

    /** zero the map */
    for (i = 0; i < map.getX(); i++) {
        for (j = 0; j < map.getY(); j++) {
            map.setMines(i, j, 0);
            map.setHeat(i, j, 0);
            map.setDisplay(i, j, '.');
        }
    }
    
    /** set the mines */
    cout << "How many mines should be on the map?: ";
    cin >> d;
    i = 0;
    while (i < d) {
        randx = (rand() % map.getX());
        randy = (rand() % map.getY());
        if (map.getMines(randx, randy) == 0) {
            map.setMines(randx, randy, 1);

            map.setHeat(randx - 1, randy - 1, (map.getHeat(randx - 1, randy - 1) + 1));
            map.setHeat(randx - 1, randy, (map.getHeat(randx - 1, randy) + 1));
            map.setHeat(randx - 1, randy + 1, (map.getHeat(randx - 1, randy + 1) + 1));
            map.setHeat(randx, randy - 1, (map.getHeat(randx, randy - 1) + 1));
            map.setHeat(randx, randy + 1, (map.getHeat(randx, randy + 1) + 1));
            map.setHeat(randx + 1, randy - 1, (map.getHeat(randx + 1, randy - 1) + 1));
            map.setHeat(randx + 1, randy, (map.getHeat(randx + 1, randy) + 1));
            map.setHeat(randx + 1, randy + 1, (map.getHeat(randx + 1, randy + 1) + 1));

            i++;
        }
    }
}

void displayMap(minemap map)
{
    int i, j;
    for (i = 0; i < map.getY(); i++) {
        for (j = 0; j < map.getX(); j++) {
            cout << map.getDisplay(j, i) << " ";
        }
        cout << endl;
    }
/*
    cout << endl;
    for (i = 0; i < map.getY(); i++) {
        for (j = 0; j < map.getX(); j++) {
            cout << map.getMines(j, i) << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (i = 0; i < map.getY(); i++) {
        for (j = 0; j < map.getX(); j++) {
            cout << map.getHeat(j, i) << " ";
        }
        cout << endl;
    }
*/
}

void selectTile(minemap map)
{
    int opt, x, y;
    cout << "(1)Check Tile (2)Flag Tile (0)Quit\nWhat action will you take?: ";
    cin >> opt;

    switch (opt)
    {
        case 1:
            //
        case 2:
            //
        case 0:
            //
        default:
            //
    }

}
