#ifndef MINEMAP_H
#define MINEMAP_H

class minemap {
    private:
        int xdim, ydim;
        int mines[256][256];
        int heat[256][256];
        char display[256][256];
    public:
        int getX() { return xdim; } 
        int getY() { return ydim; }
        int getMines(int x, int y) { return mines[x][y]; }
        int getHeat(int x, int y) { return heat[x][y]; }
        char getDisplay(int x, int y) { return display[x][y]; }

        void setX(int x) { xdim = x; }
        void setY(int y) { ydim = y; }
        void setMines(int x, int y, int v) { mines[x][y] = v; }
        void setHeat(int x, int y, int v) { heat[x][y] = v; }
        void setDisplay(int x, int y, char v) { display[x][y] = v; }
};

#endif
