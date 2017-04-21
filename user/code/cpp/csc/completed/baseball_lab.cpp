#include <iostream>
#include <iomanip>

using namespace std;

void input_player(int & id, int & singles, int & doubles, int & triples, int & hrs, int & atbats, int & walks);
void calc_player(int singles, int doubles, int triples, int hrs, int atbats, int walks, int & hits, double & battingavg, double & sluggingperc, double onbaseperc);
void output_player(int id, int hits, int atbats, double battingavg, double sluggingperc, double onbaseperc);

int main()
{
    int id, singles, doubles, triples, hrs, atbats, walks, hits;
    double battingavg, sluggingperc, onbaseperc;

    input_player(id, singles, doubles, triples, hrs, atbats, walks);
    calc_player(singles, doubles, triples, hrs, atbats, walks, hits, battingavg, sluggingperc, onbaseperc);
    output_player(id, hits, atbats, battingavg, sluggingperc, onbaseperc);
    return 0;
}

void input_player(int & id, int & singles, int & doubles, int & triples, int & hrs, int & atbats, int & walks)
{
    cout << "Input ID: ";
    cin >> id;
    cout << "Input Singles: ";
    cin >> singles;
    cout << "Input Doubles: ";
    cin >> doubles;
    cout << "Input Triples: ";
    cin >> triples;
    cout << "Input Home Runs: ";
    cin >> hrs;
    cout << "Input at-bats: ";
    cin >> atbats;
    cout << "Input walks: ";
    cin >> walks;
}

void calc_player(int singles, int doubles, int triples, int hrs, int atbats, int walks, int & hits, double & battingavg, double & sluggingperc, double onbaseperc)
{
    hits = singles + doubles + triples + hrs;
    battingavg = hits / (double)atbats;
    sluggingperc = ((hrs * 4)+(triples * 3)+(doubles * 2)+(singles))/((double)atbats);
    onbaseperc = (hits + walks) / ((double)atbats + walks);
}
void output_player(int id, int hits, int atbats, double battingavg, double sluggingperc, double onbaseperc)
{
    cout << setprecision(3) << fixed;
    cout << "ID :\t\t\t" << id << endl;
    cout << "Total Hits :\t\t" << hits << endl;
    cout << "At-Bats :\t\t" << atbats << endl;
    cout << "Batting Average:\t" << battingavg << endl;
    cout << "Slugging Percentage:\t" << sluggingperc << endl;
    cout << "On-Base Percentage:\t" << onbaseperc << endl;
}


