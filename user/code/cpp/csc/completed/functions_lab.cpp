#include <iostream>

using namespace std;

void input_employee(int & id, double & hours, double & rate);
void process_employee(double rate, double hours, double & gross, double & fed, double & state, double & fica, double & total, double & net);
void print_employee(double rate, double hours, double gross, double net);

int main(int argc, char *argv[])
{
    int id;
    double gross, hours, rate, net, fed, state, fica, total;

    input_employee(id, hours, rate);
    process_employee(rate, hours, gross, fed, state, fica, total, net);
    print_employee(rate, hours, gross, net);

    return 0;
}

void input_employee(int & id, double & hours, double & rate)
{
    cout << "Enter Employee ID: ";
    cin >> id;
    cout << "Enter employee hours worked: ";
    cin >> hours;
    cout << "Enter employee pay rate: ";
    cin >> rate;
}

void process_employee(double rate, double hours, double & gross, double & fed, double & state, double & fica, double & total, double & net)
{
    gross = hours * rate;
    fed = gross * 0.2;
    state = gross * 0.05;
    fica = gross * 0.0765;
    total = fed + state + fica;
    net = gross - total;
}

void print_employee(double rate, double hours, double gross, double net)
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "Gross : $ " <<  gross <<  "\t";
    cout << "Hours : " <<  hours <<  endl; 
    cout << "Rate  : " <<  rate <<  endl; 
    cout << "Net  : " <<  net <<  endl;
}

