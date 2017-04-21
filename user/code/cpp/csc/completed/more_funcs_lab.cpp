#include <iostream>

using namespace std;

double gethours();
void input_employee(int & id, double & hours, double & rate);
double calcfedtaxrate(double gross);
void process_employee(double rate, double hours, double & gross, double & fed, double & state, double & fica, double & total, double & net);
void print_employee(double rate, double hours, double gross, double net);

int main(int argc, char *argv[])
{
    int id;
    double gross, hours, rate, net, fed, state, fica, total;

    while (1) {
        input_employee(id, hours, rate);
        process_employee(rate, hours, gross, fed, state, fica, total, net);
        print_employee(rate, hours, gross, net);
    }
    return 0;
}

void input_employee(int & id, double & hours, double & rate)
{
    cout << "Enter Employee ID: ";
    cin >> id;
    hours = gethours();
    cout << "Enter employee pay rate: ";
    cin >> rate;
}

void process_employee(double rate, double hours, double & gross, double & fed, double & state, double & fica, double & total, double & net)
{
    gross = hours * rate;
    fed = calcfedtaxrate(gross);
    state = gross * 0.05;
    fica = gross * 0.0765;
    total = fed + state + fica;
    net = gross - total;
}

void print_employee(double rate, double hours, double gross, double net)
{
    cout << endl;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "Gross : $ " <<  gross <<  "\t";
    cout << "Hours : " <<  hours <<  endl; 
    cout << "Rate  : " <<  rate <<  endl; 
    cout << "Net  : " <<  net <<  endl;
    cout << endl << endl;
}

double gethours()
{
    double total, sun, mon, tue, wed, thu, fri, sat;
    int i;
    for (i = 0; i < 7; i++) {
        cout << "Enter hours for ";
        switch(i) {
            case 0 : cout << "Sunday: "; cin >> sun; break;
            
            case 1 : cout << "Monday: "; cin >> mon; break;

            case 2 : cout << "Tuesday: "; cin >> tue; break;

            case 3 : cout << "Wednesday: "; cin >> wed; break;

            case 4 : cout << "Thursday: "; cin >> thu; break;

            case 5 : cout << "Friday: "; cin >> fri; break;

            case 6 : cout << "Saturday: "; cin >> sat; break;

            default : cout << "You shouldn't be here! Something has gone horribly wrong!\n";
        }
    }
    total = sun + mon + tue + wed + thu + fri + sat;
    return total;
}
double calcfedtaxrate(double gross)
{
    return (gross * 0.2);
}
