#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    const int max = 5;
    int id[max];        // City ID
    double temp[max];   // Temperature
    double rain[max];   // Rainfall
    int pop[max];       // Population

    ofstream fout;
    ifstream fin;
    fout.open("log.txt");

    int i;
    for (i = 0; i < max; i++) {
        cout << "Enter the City ID: ";
        cin >> id[i];
        fout << id[i] << " ";
        cout << "Enter the city's temperature: ";
        cin >> temp[i];
        fout << temp[i] << " ";
        cout << "Enter the city's rainfall: ";
        cin >> rain[i];
        fout << rain[i] << " ";
        cout << "Enter the city's population: ";
        cin >> pop[i];
        fout << pop[i] << "\n";
    }
    cout << "The City Data entered is as follows:\n\n";
    for (i = 0; i < max; i++) {
        cout << "CITY : " << id[i] << "\n--------------------------------";
        
        if (pop[i] < 50000) cout << "\nSIZE \t\t: RURAL AREA";
        else if (pop[i] < 250000) cout << "\nSIZE \t\t: SMALL METRO";
        else if (pop[i] < 1000000) cout << "\nSIZE \t\t: MEDIUM METRO";
        else cout << "\nSIZE \t\t: LARGE METRO";

        cout << "\nPOPULATION \t: " << pop[i] << "\nTEMPURATURE \t: " << temp[i] << "\nRAINFALL \t: " << rain[i] << "\n\n";
    }
    fout.close();
    return 0;
}
