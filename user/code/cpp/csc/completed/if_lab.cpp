#include <iostream>

using namespace std;

int main ()
{
    double grade1, grade2, grade3, average;
    char lettergrade;

    cin >> grade1 >> grade2 >> grade3;
    average = (grade1 + grade2 + grade3) / 3;
    
    if (average >= 90) {
        lettergrade = 'A';
    } else if (average >= 80) {
        lettergrade = 'B';
    } else if (average >= 70) {
        lettergrade = 'C';
    } else if (average >= 60) {
        lettergrade = 'D';
    } else {
        lettergrade = 'F';
    } 

    cout << "Grade is " << lettergrade << endl;

    return 0;
}
